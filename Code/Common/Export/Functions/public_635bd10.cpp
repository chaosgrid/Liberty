#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635b150);
CLANG_FORWARD_PROC_SYMBOL(public_635ba10);
CLANG_FORWARD_PROC_SYMBOL(public_635bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_635bd10);

#define public_635bd54 _public_635bd54
#define public_635bd77 _public_635bd77

PROC_DECLARE(0x635bd10, internal_635bd10, public_635bd10);
extern "C" NAKED register_t __cdecl internal_635bd10()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0xC]
        push eax
        push edi
        push esi
        push ebx
        call public_635b150
        mov ecx, dword ptr ss : [esp+0x20]
        or ecx, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        test ecx, 0x80000000
        jne public_635bd54
        push edi
        push esi
        push ebx
        call public_635ba10
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_635bd54 : nop
        fld dword ptr ss : [esp+0xC]
        push edi
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_635bd77
        push esi
        push ebx
        call public_635bcc0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_635bd77 : nop
        mov edx, esi
        and edx, 0xC
        mov eax, dword ptr ds : [edx+public_63ee4e0]
        add eax, esi
        push eax
        push ebx
        call public_635bcc0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x635bd10)
    }
}

#undef public_635bd54
#undef public_635bd77
