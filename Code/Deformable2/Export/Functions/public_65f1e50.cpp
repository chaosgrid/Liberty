#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3640);
CLANG_FORWARD_PROC_SYMBOL(public_65f3650);
CLANG_FORWARD_PROC_SYMBOL(public_65f36c0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f1e65 _public_65f1e65
#define public_65f1ea8 _public_65f1ea8
#define public_65f1ec2 _public_65f1ec2

PROC_DECLARE(0x65f1e50, internal_65f1e50, public_65f1e50);
extern "C" NAKED register_t __cdecl internal_65f1e50()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi], 0
        jg public_65f1e65
        pop edi
        mov eax, 0xFFFFFFFE
        pop esi
        ret 0x18
        public_65f1e65 : nop
        push 0x2C
        call public_6600bb6
        add esp, 4
        test eax, eax
        je public_65f1ec2
        mov ecx, eax
        call public_65f3650
        mov esi, eax
        test esi, esi
        je public_65f1ec2
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        push edx
        push edi
        mov ecx, esi
        call public_65f36c0
        test al, al
        je public_65f1ea8
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], esi
        pop edi
        xor eax, eax
        pop esi
        ret 0x18
        public_65f1ea8 : nop
        mov ecx, esi
        call public_65f3640
        push esi
        call public_6600bb0
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [ecx], 0
        public_65f1ec2 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0x18
        UNREACHABLE_TRAP(0x65f1e50)
    }
}

#undef public_65f1e65
#undef public_65f1ea8
#undef public_65f1ec2
