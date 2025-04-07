#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68074d0);
CLANG_FORWARD_PROC_SYMBOL(public_6807890);
CLANG_FORWARD_PROC_SYMBOL(public_6808220);

#define public_6808257 _public_6808257
#define public_6808260 _public_6808260
#define public_6808268 _public_6808268
#define public_680828f _public_680828f

PROC_DECLARE(0x6808220, internal_6808220, public_6808220);
extern "C" NAKED register_t __cdecl internal_6808220()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+8]
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        push ebx
        call public_68074d0
        mov ecx, dword ptr ds : [edi+0x18]
        add esp, 0x10
        xor esi, esi
        test ecx, ecx
        jle public_6808268
        mov edx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+0x28]
        public_6808257 : nop
        cmp dword ptr ds : [eax-4], ebp
        jne public_6808260
        cmp dword ptr ds : [eax], edx
        je public_680828f
        public_6808260 : nop
        inc esi
        add eax, 8
        cmp esi, ecx
        jl public_6808257
/*FIXUP public_6808268 : nop
        push offset public_680dce4 @0x6808268*/
  FIXUP public_6808268 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dce4
        lea eax, ds:[ecx+1]
        push 0x20
        push eax
        push ebx
        mov dword ptr ds : [edi+0x18], eax
        call public_6807890
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+esi*8+0x24], edx
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x10
        mov dword ptr ds : [edi+esi*8+0x28], eax
        public_680828f : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6808220)
    }
}

#undef public_6808257
#undef public_6808260
#undef public_6808268
#undef public_680828f
