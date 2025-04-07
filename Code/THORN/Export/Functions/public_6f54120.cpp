#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f533d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53790);
CLANG_FORWARD_PROC_SYMBOL(public_6f54120);

#define public_6f54157 _public_6f54157
#define public_6f54160 _public_6f54160
#define public_6f54168 _public_6f54168
#define public_6f5418f _public_6f5418f

PROC_DECLARE(0x6f54120, internal_6f54120, public_6f54120);
extern "C" NAKED register_t __cdecl internal_6f54120()
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
        call public_6f533d0
        mov ecx, dword ptr ds : [edi+0x18]
        add esp, 0x10
        xor esi, esi
        test ecx, ecx
        jle public_6f54168
        mov edx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+0x28]
        public_6f54157 : nop
        cmp dword ptr ds : [eax-4], ebp
        jne public_6f54160
        cmp dword ptr ds : [eax], edx
        je public_6f5418f
        public_6f54160 : nop
        inc esi
        add eax, 8
        cmp esi, ecx
        jl public_6f54157
/*FIXUP public_6f54168 : nop
        push offset public_6f613b4 @0x6f54168*/
  FIXUP public_6f54168 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f613b4
        lea eax, ds:[ecx+1]
        push 0x20
        push eax
        push ebx
        mov dword ptr ds : [edi+0x18], eax
        call public_6f53790
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+esi*8+0x24], edx
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x10
        mov dword ptr ds : [edi+esi*8+0x28], eax
        public_6f5418f : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f54120)
    }
}

#undef public_6f54157
#undef public_6f54160
#undef public_6f54168
#undef public_6f5418f
