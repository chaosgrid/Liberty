#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6383ee0);

#define public_6383f1f _public_6383f1f
#define public_6383f33 _public_6383f33
#define public_6383f45 _public_6383f45

PROC_DECLARE(0x6383ee0, internal_6383ee0, public_6383ee0);
extern "C" NAKED register_t __cdecl internal_6383ee0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        mov ecx, dword ptr ds : [public_658b800]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+8]
        push eax
        push esi
        push ecx
        call public_637fd60
        fld qword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_63a58b0]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_6383f45
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, eax
        dec eax
        test edx, edx
        je public_6383f33
        public_6383f1f : nop
        mov ecx, dword ptr ds : [esi+0x18]
        fld qword ptr ds : [ecx+eax*8]
        lea ecx, ds:[ecx+eax*8]
        mov edx, eax
        fchs 
        dec eax
        fstp qword ptr ds : [ecx]
        test edx, edx
        jne public_6383f1f
        public_6383f33 : nop
        fld qword ptr ds : [esi+0x10]
        mov eax, 1
        fchs 
        fstp qword ptr ds : [esi+0x10]
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_6383f45 : nop
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6383ee0)
    }
}

#undef public_6383f1f
#undef public_6383f33
#undef public_6383f45
