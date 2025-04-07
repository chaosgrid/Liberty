#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635ae60);
CLANG_FORWARD_PROC_SYMBOL(public_635b210);
CLANG_FORWARD_PROC_SYMBOL(public_635bd10);
CLANG_FORWARD_PROC_SYMBOL(public_6363350);
CLANG_FORWARD_PROC_SYMBOL(public_6363620);
CLANG_FORWARD_PROC_SYMBOL(public_63651c0);

#define public_63633c7 _public_63633c7
#define public_63633d6 _public_63633d6
#define public_63633fb _public_63633fb
#define public_63633fd _public_63633fd

PROC_DECLARE(0x6363350, internal_6363350, public_6363350);
extern "C" NAKED register_t __cdecl internal_6363350()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x38]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        lea eax, ss:[esp+0x24]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edi
        push ebp
        push ecx
        mov dword ptr ss : [esp+0x20], ebx
        call public_635ae60
        mov esi, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        push esi
        push ecx
        call public_635b210
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x34]
        or edx, eax
        or edx, ecx
        add esp, 0x20
        test edx, 0x80000000
        jne public_63633c7
        mov ecx, dword ptr ss : [esp+0x38]
        push edi
        push ebp
        push esi
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        mov ecx, ebx
        call public_6363620
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x10
        public_63633c7 : nop
        mov dword ptr ss : [esp+0x44], 0x60AD78EC
        xor ebx, ebx
        mov ebp, 3
        public_63633d6 : nop
        mov eax, dword ptr ds : [edi+4]
        push esi
        push eax
        lea edx, ss:[esp+0x2C]
        push edx
        call public_635bd10
        fcom dword ptr ss : [esp+0x50]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_63633fb
        fstp dword ptr ss : [esp+0x44]
        mov ebx, esi
        jmp public_63633fd
        public_63633fb : nop
        fstp st(0)
        public_63633fd : nop
        mov eax, esi
        and eax, 0xC
        add esi, dword ptr ds : [eax+public_63ee4e0]
        dec ebp
        jne public_63633d6
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x38]
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push edx
        call public_63651c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x10
        UNREACHABLE_TRAP(0x6363350)
    }
}

#undef public_63633c7
#undef public_63633d6
#undef public_63633fb
#undef public_63633fd
