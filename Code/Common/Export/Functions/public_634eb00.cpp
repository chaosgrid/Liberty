#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e8a0);
CLANG_FORWARD_PROC_SYMBOL(public_634eb00);
CLANG_FORWARD_PROC_SYMBOL(public_634f320);
CLANG_FORWARD_PROC_SYMBOL(public_6350250);
CLANG_FORWARD_PROC_SYMBOL(public_6350310);
CLANG_FORWARD_PROC_SYMBOL(public_6350350);
CLANG_FORWARD_PROC_SYMBOL(public_6352b90);
CLANG_FORWARD_PROC_SYMBOL(public_6362840);

#define public_634eb35 _public_634eb35
#define public_634eb4d _public_634eb4d
#define public_634eb58 _public_634eb58
#define public_634eb5f _public_634eb5f
#define public_634eb76 _public_634eb76
#define public_634eb84 _public_634eb84
#define public_634ebb0 _public_634ebb0
#define public_634ebb8 _public_634ebb8
#define public_634ebc1 _public_634ebc1

PROC_DECLARE(0x634eb00, internal_634eb00, public_634eb00);
extern "C" NAKED register_t __cdecl internal_634eb00()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        mov ecx, esi
        call public_6352b90
        mov ecx, dword ptr ds : [esi+0x14]
        test ch, 0xC0
        jne public_634eb58
        fld dword ptr ds : [esi+0x54]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_634eb4d
        test ch, 0xC
        je public_634eb35
        push esi
        call public_6350350
        add esp, 4
        public_634eb35 : nop
        push esi
        mov ecx, ebx
        call public_634e8a0
        push 2
        push 1
        mov ecx, esi
        call public_634f320
        pop esi
        pop ebx
        ret 4
        public_634eb4d : nop
        fld dword ptr ds : [esi+0x54]
        fchs 
        fstp dword ptr ss : [esp+0xC]
        jmp public_634eb5f
        public_634eb58 : nop
        mov eax, dword ptr ds : [esi+0x50]
        mov dword ptr ss : [esp+0xC], eax
        public_634eb5f : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [ecx+0x1C]
        push edi
        xor edi, edi
        test eax, eax
        jne public_634eb76
        mov edx, dword ptr ds : [esi+0x44]
        mov eax, dword ptr ds : [edx+0x1C]
        test eax, eax
        je public_634eb84
        public_634eb76 : nop
        fld dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+0x40]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x10]
        public_634eb84 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        call public_6350250
        add esp, 8
        cmp edi, 1
        pop edi
        jne public_634ebb0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        test eax, eax
        je public_634ebb8
        push ebx
        mov ecx, esi
        call public_6362840
        pop esi
        pop ebx
        ret 4
        public_634ebb0 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test ah, 0xC
        jne public_634ebc1
        public_634ebb8 : nop
        push esi
        call public_6350310
        add esp, 4
        public_634ebc1 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x634eb00)
    }
}

#undef public_634eb35
#undef public_634eb4d
#undef public_634eb58
#undef public_634eb5f
#undef public_634eb76
#undef public_634eb84
#undef public_634ebb0
#undef public_634ebb8
#undef public_634ebc1
