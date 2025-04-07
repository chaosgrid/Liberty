#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10005840);

#define public_10005ec0 _public_10005ec0
#define public_10005ed3 _public_10005ed3
#define public_10005ee0 _public_10005ee0
#define public_10005ef2 _public_10005ef2
#define public_10005efa _public_10005efa
#define public_10005f03 _public_10005f03
#define public_10005f07 _public_10005f07
#define public_10005f2c _public_10005f2c
#define public_10005f50 _public_10005f50

PROC_DECLARE(0x10005e90, internal_10005e90, public_10005e90);
extern "C" NAKED register_t __cdecl internal_10005e90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        push edi
        je public_10005f50
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_10005f50
        cmp dword ptr ds : [eax], 0xD
        je public_10005ec0
        mov dword ptr ds : [eax], 0xD
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+4], 0
        public_10005ec0 : nop
        mov ebp, dword ptr ds : [esi+4]
        test ebp, ebp
        jne public_10005ed3
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFB
        pop ebx
        ret 4
        public_10005ed3 : nop
        mov edi, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, edi
        lea ecx, ds:[ecx]
        public_10005ee0 : nop
        cmp eax, 4
        jae public_10005f07
        mov dl, byte ptr ds : [ecx]
        cmp dl, byte ptr ds : [eax+public_1000b24c]
        jne public_10005ef2
        inc eax
        jmp public_10005f03
        public_10005ef2 : nop
        test dl, dl
        je public_10005efa
        xor eax, eax
        jmp public_10005f03
        public_10005efa : nop
        mov edx, 4
        sub edx, eax
        mov eax, edx
        public_10005f03 : nop
        inc ecx
        dec ebp
        jne public_10005ee0
        public_10005f07 : nop
        mov edx, ecx
        sub edx, edi
        mov edi, dword ptr ds : [esi+8]
        add edi, edx
        cmp eax, 4
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [ebx+4], eax
        je public_10005f2c
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 4
        public_10005f2c : nop
        mov edi, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0x14]
        push esi
        call public_10005840
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+8], edi
        pop edi
        mov dword ptr ds : [esi+0x14], ebx
        pop esi
        pop ebp
        mov dword ptr ds : [eax], 7
        xor eax, eax
        pop ebx
        ret 4
        public_10005f50 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x10005e90)
    }
}

#undef public_10005ec0
#undef public_10005ed3
#undef public_10005ee0
#undef public_10005ef2
#undef public_10005efa
#undef public_10005f03
#undef public_10005f07
#undef public_10005f2c
#undef public_10005f50
