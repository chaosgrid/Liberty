#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d417ce);

#define public_6d417f5 _public_6d417f5
#define public_6d4180a _public_6d4180a
#define public_6d4180e _public_6d4180e
#define public_6d41819 _public_6d41819
#define public_6d41831 _public_6d41831
#define public_6d41853 _public_6d41853
#define public_6d41860 _public_6d41860

PROC_DECLARE(0x6d417ce, internal_6d417ce, public_6d417ce);
extern "C" NAKED register_t __cdecl internal_6d417ce()
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
        jne public_6d417f5
        push eax
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        je public_6d4180a
        mov edi, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+8]
        public_6d417f5 : nop
        movzx edx, byte ptr ds : [edi]
        dec ebx
        inc edi
        test ebx, ebx
        mov dword ptr ss : [ebp-4], edx
        jne public_6d41819
        push eax
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        jne public_6d4180e
        public_6d4180a : nop
        xor al, al
        jmp public_6d41860
        public_6d4180e : nop
        mov edi, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-4]
        public_6d41819 : nop
        movzx ecx, byte ptr ds : [edi]
        dec ebx
        inc edi
        cmp edx, 0xFF
        mov dword ptr ss : [ebp-4], ecx
        jne public_6d41831
        cmp ecx, 0xD8
        je public_6d41853
        public_6d41831 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 0x34
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x18], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x1C], edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+8]
        pop ecx
        mov ecx, dword ptr ss : [ebp-4]
        public_6d41853 : nop
        mov dword ptr ds : [eax+0x178], ecx
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], ebx
        mov al, 1
        public_6d41860 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d417ce)
    }
}

#undef public_6d417f5
#undef public_6d4180a
#undef public_6d4180e
#undef public_6d41819
#undef public_6d41831
#undef public_6d41853
#undef public_6d41860
