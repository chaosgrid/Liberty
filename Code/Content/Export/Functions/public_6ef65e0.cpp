#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef65e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef65f9 _public_6ef65f9
#define public_6ef65fe _public_6ef65fe
#define public_6ef6604 _public_6ef6604
#define public_6ef6620 _public_6ef6620
#define public_6ef6628 _public_6ef6628
#define public_6ef662e _public_6ef662e

PROC_DECLARE(0x6ef65e0, internal_6ef65e0, public_6ef65e0);
extern "C" NAKED register_t __cdecl internal_6ef65e0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi]
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        jne public_6ef65f9
        xor eax, eax
        jmp public_6ef65fe
        public_6ef65f9 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        public_6ef65fe : nop
        test eax, eax
        jge public_6ef6604
        xor eax, eax
        public_6ef6604 : nop
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov edi, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edi
        je public_6ef662e
        lea esp, ss:[esp]
        public_6ef6620 : nop
        test ecx, ecx
        je public_6ef6628
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [ecx], dl
        public_6ef6628 : nop
        inc ecx
        inc eax
        cmp eax, edi
        jne public_6ef6620
        public_6ef662e : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov eax, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ef65e0)
    }
}

#undef public_6ef65f9
#undef public_6ef65fe
#undef public_6ef6604
#undef public_6ef6620
#undef public_6ef6628
#undef public_6ef662e
