#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d416f7);

#define public_6d4170b _public_6d4170b
#define public_6d41714 _public_6d41714
#define public_6d41719 _public_6d41719
#define public_6d4172e _public_6d4172e
#define public_6d4173b _public_6d4173b
#define public_6d41750 _public_6d41750
#define public_6d41770 _public_6d41770
#define public_6d41774 _public_6d41774
#define public_6d417bc _public_6d417bc
#define public_6d417c9 _public_6d417c9

PROC_DECLARE(0x6d416f7, internal_6d416f7, public_6d416f7);
extern "C" NAKED register_t __cdecl internal_6d416f7()
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
        push edi
        mov edi, dword ptr ds : [esi]
        jmp public_6d41719
        public_6d4170b : nop
        mov ecx, dword ptr ds : [eax+0x190]
        inc dword ptr ds : [ecx+0x58]
        public_6d41714 : nop
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], ebx
        public_6d41719 : nop
        test ebx, ebx
        jne public_6d4172e
        push eax
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        je public_6d41770
        mov eax, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        public_6d4172e : nop
        movzx ecx, byte ptr ds : [edi]
        dec ebx
        inc edi
        cmp ecx, 0xFF
        jne public_6d4170b
        public_6d4173b : nop
        test ebx, ebx
        jne public_6d41750
        push eax
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        je public_6d41770
        mov edi, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+8]
        public_6d41750 : nop
        movzx ecx, byte ptr ds : [edi]
        dec ebx
        inc edi
        cmp ecx, 0xFF
        mov dword ptr ss : [ebp-4], ecx
        je public_6d4173b
        test ecx, ecx
        jne public_6d41774
        mov ecx, dword ptr ds : [eax+0x190]
        add dword ptr ds : [ecx+0x58], 2
        jmp public_6d41714
        public_6d41770 : nop
        xor al, al
        jmp public_6d417c9
        public_6d41774 : nop
        mov edx, dword ptr ds : [eax+0x190]
        cmp dword ptr ds : [edx+0x58], 0
        je public_6d417bc
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 0x70
        mov ecx, dword ptr ds : [eax+0x190]
        mov ecx, dword ptr ds : [ecx+0x58]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+0x18], ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x1C], edx
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+0x190]
        and dword ptr ds : [eax+0x58], 0
        mov eax, dword ptr ss : [ebp+8]
        pop ecx
        pop ecx
        mov ecx, dword ptr ss : [ebp-4]
        public_6d417bc : nop
        mov dword ptr ds : [eax+0x178], ecx
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], ebx
        mov al, 1
        public_6d417c9 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d416f7)
    }
}

#undef public_6d4170b
#undef public_6d41714
#undef public_6d41719
#undef public_6d4172e
#undef public_6d4173b
#undef public_6d41750
#undef public_6d41770
#undef public_6d41774
#undef public_6d417bc
#undef public_6d417c9
