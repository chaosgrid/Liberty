#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_51d7f0);

#define public_51a1a4 _public_51a1a4
#define public_51a1bb _public_51a1bb
#define public_51a1cd _public_51a1cd
#define public_51a1e4 _public_51a1e4
#define public_51a1e6 _public_51a1e6
#define public_51a202 _public_51a202

PROC_DECLARE(0x51a190, internal_51a190, public_51a190);
extern "C" NAKED register_t __cdecl internal_51a190()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_45a740
        test al, al
        je public_51a1a4
        pop edi
        xor al, al
        pop esi
        ret 4
        public_51a1a4 : nop
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov ecx, esi
        call public_51d7f0
        test al, al
        je public_51a1bb
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_51a1bb : nop
        cmp edi, 0x3F
        push ebx
        mov bl, 1
        je public_51a1cd
        xor bl, bl
        mov al, bl
        pop ebx
        pop edi
        pop esi
        ret 4
        public_51a1cd : nop
        mov dl, byte ptr ds : [esi+0x44]
        test dl, dl
        sete al
        mov byte ptr ds : [esi+0x44], al
        mov eax, dword ptr ds : [esi-0x38]
        test eax, eax
        je public_51a1e4
        add eax, 0xFFFFFFF8
        jmp public_51a1e6
        public_51a1e4 : nop
        xor eax, eax
        public_51a1e6 : nop
        push eax
        call dword ptr ds : [public_5c6470]
        add esp, 4
        test eax, eax
        je public_51a202
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x44]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c663c]
        public_51a202 : nop
        mov al, bl
        pop ebx
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x51a190)
    }
}

#undef public_51a1a4
#undef public_51a1bb
#undef public_51a1cd
#undef public_51a1e4
#undef public_51a1e6
#undef public_51a202
