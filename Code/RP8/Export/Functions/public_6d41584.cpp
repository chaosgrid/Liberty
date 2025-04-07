#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41584);

#define public_6d415ab _public_6d415ab
#define public_6d415c9 _public_6d415c9
#define public_6d415e9 _public_6d415e9
#define public_6d415fe _public_6d415fe
#define public_6d41614 _public_6d41614
#define public_6d41618 _public_6d41618
#define public_6d41620 _public_6d41620
#define public_6d41656 _public_6d41656

PROC_DECLARE(0x6d41584, internal_6d41584, public_6d41584);
extern "C" NAKED register_t __cdecl internal_6d41584()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+0x14]
        mov ebx, dword ptr ds : [esi+4]
        test ebx, ebx
        push edi
        mov edi, dword ptr ds : [esi]
        jne public_6d415ab
        push eax
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        je public_6d41614
        mov edi, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+8]
        public_6d415ab : nop
        xor ecx, ecx
        mov ch, byte ptr ds : [edi]
        dec ebx
        inc edi
        test ebx, ebx
        mov dword ptr ss : [ebp-4], ecx
        jne public_6d415c9
        push eax
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        je public_6d41614
        mov edi, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+8]
        public_6d415c9 : nop
        movzx ecx, byte ptr ds : [edi]
        add dword ptr ss : [ebp-4], ecx
        dec ebx
        inc edi
        cmp dword ptr ss : [ebp-4], 4
        je public_6d415e9
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+8]
        pop ecx
        public_6d415e9 : nop
        test ebx, ebx
        jne public_6d415fe
        push eax
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        je public_6d41614
        mov edi, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+8]
        public_6d415fe : nop
        xor ecx, ecx
        mov ch, byte ptr ds : [edi]
        dec ebx
        inc edi
        test ebx, ebx
        mov dword ptr ss : [ebp-4], ecx
        jne public_6d41620
        push eax
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        jne public_6d41618
        public_6d41614 : nop
        xor al, al
        jmp public_6d41656
        public_6d41618 : nop
        mov edi, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+8]
        public_6d41620 : nop
        movzx ecx, byte ptr ds : [edi]
        add dword ptr ss : [ebp-4], ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x14], 0x51
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x18], edx
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        pop ecx
        pop ecx
        mov ecx, dword ptr ss : [ebp+8]
        inc edi
        mov dword ptr ds : [ecx+0xFC], eax
        dec ebx
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], ebx
        mov al, 1
        public_6d41656 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d41584)
    }
}

#undef public_6d415ab
#undef public_6d415c9
#undef public_6d415e9
#undef public_6d415fe
#undef public_6d41614
#undef public_6d41618
#undef public_6d41620
#undef public_6d41656
