#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f110e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f11130);

#define public_6f118c0 _public_6f118c0
#define public_6f118e4 _public_6f118e4
#define public_6f118e8 _public_6f118e8
#define public_6f118ed _public_6f118ed
#define public_6f11957 _public_6f11957
#define public_6f1196a _public_6f1196a
#define public_6f1197b _public_6f1197b

PROC_DECLARE(0x6f118a0, internal_6f118a0, public_6f118a0);
extern "C" NAKED register_t __cdecl internal_6f118a0()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, 0x14
        jne public_6f1196a
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        push ebx
        nop 
        public_6f118c0 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f118e8
        test cl, cl
        je public_6f118e4
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f118e8
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f118c0
        public_6f118e4 : nop
        xor eax, eax
        jmp public_6f118ed
        public_6f118e8 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f118ed : nop
        test eax, eax
        pop ebx
        jne public_6f1196a
        push 1
        push 0x28
        call dword ptr ds : [public_6f12028]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6f11957
        lea eax, ds:[esi+0x10]
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax], offset public_6f120c8
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_6f12098
        mov dword ptr ds : [esi+4], offset public_6f12084
        mov dword ptr ds : [esi+0x1C], eax
        call public_6f110e0
        mov edi, eax
        test edi, edi
        je public_6f1197b
        mov ecx, esi
        call public_6f11130
        push esi
        call dword ptr ds : [public_6f12024]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6f11957 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6f1196a : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [edx], ebp
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        public_6f1197b : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6f118a0)
    }
}

#undef public_6f118c0
#undef public_6f118e4
#undef public_6f118e8
#undef public_6f118ed
#undef public_6f11957
#undef public_6f1196a
#undef public_6f1197b
