#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0000);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0110);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec02cf _public_6ec02cf
#define public_6ec02dd _public_6ec02dd

PROC_DECLARE(0x6ec0280, internal_6ec0280, public_6ec0280);
extern "C" NAKED register_t __cdecl internal_6ec0280()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor bl, bl
        test edi, edi
        mov esi, ecx
        je public_6ec02dd
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec02dd
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ec02dd
        call public_6f478c0
        test eax, eax
        je public_6ec02dd
        mov al, byte ptr ds : [esi+0x21]
        test al, al
        mov ecx, esi
        je public_6ec02cf
        mov edx, dword ptr ds : [edi]
        push edx
        call public_6ec0000
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6ec02cf : nop
        mov eax, dword ptr ds : [edi]
        push eax
        call public_6ec0110
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6ec02dd : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec0280)
    }
}

#undef public_6ec02cf
#undef public_6ec02dd
