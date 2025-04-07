#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68065d0);
CLANG_FORWARD_PROC_SYMBOL(public_6809000);
CLANG_FORWARD_PROC_SYMBOL(public_6809140);
CLANG_FORWARD_PROC_SYMBOL(public_6809180);

#define public_68091bb _public_68091bb
#define public_68091e1 _public_68091e1
#define public_68091f8 _public_68091f8

PROC_DECLARE(0x6809180, internal_6809180, public_6809180);
extern "C" NAKED register_t __cdecl internal_6809180()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_680de5c @0x6809186*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680de5c
        push ebp
        call public_6809000
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je public_68091f8
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ds:[ebx*8+8]
        push eax
        push 0
        call public_68065d0
        add esp, 8
        xor esi, esi
        test ebx, ebx
        mov dword ptr ds : [edi+0x1C], eax
        jle public_68091e1
/*FIXUP public_68091bb : nop
        push offset public_680de40 @0x68091bb*/
  FIXUP public_68091bb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_680de40
        push ebp
        call public_6809000
        mov ecx, dword ptr ds : [edi+0x1C]
        push ebp
        mov dword ptr ds : [ecx+esi*8+4], eax
        call public_6809140
        mov edx, dword ptr ds : [edi+0x1C]
        add esp, 0xC
        mov dword ptr ds : [edx+esi*8], eax
        inc esi
        cmp esi, ebx
        jl public_68091bb
        public_68091e1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [eax+esi*8+4], 0xFFFFFFFF
        mov ecx, dword ptr ds : [edi+0x1C]
        pop edi
        mov dword ptr ds : [ecx+esi*8], 0
        pop esi
        public_68091f8 : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6809180)
    }
}

#undef public_68091bb
#undef public_68091e1
#undef public_68091f8
