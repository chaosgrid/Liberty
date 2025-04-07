#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661ed60);
CLANG_FORWARD_PROC_SYMBOL(public_661f210);
CLANG_FORWARD_PROC_SYMBOL(public_661f250);
CLANG_FORWARD_PROC_SYMBOL(public_6625560);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661f296 _public_661f296
#define public_661f2e8 _public_661f2e8

PROC_DECLARE(0x661f250, internal_661f250, public_661f250);
extern "C" NAKED register_t __cdecl internal_661f250()
{
    __asm
    {
        sub esp, 0x60
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_661f2e8
        push ebx
        push esi
        push edi
        lea esi, ss:[ebp+0x2C]
        push 0
        push esi
        lea ecx, ss:[ebp+0x5C]
        call public_6625560
        mov bl, al
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ds : [public_662b178]
        test eax, eax
        jne public_661f296
        call public_6628190
        mov dword ptr ds : [public_662b178], eax
        public_661f296 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x14]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x10]
        lea edi, ss:[esp+0x40]
        lea edx, ss:[esp+0x40]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x1C]
        pop edi
        pop esi
        test bl, bl
        pop ebx
        je public_661f2e8
        push 1
        mov ecx, ebp
        call public_661ed60
        mov eax, dword ptr ss : [ebp+4]
        push ebp
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x34]
        test al, al
        je public_661f2e8
        push ebp
        call public_661f210
        add esp, 4
        public_661f2e8 : nop
        xor al, al
        pop ebp
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x661f250)
    }
}

#undef public_661f296
#undef public_661f2e8
