#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001a80);
CLANG_FORWARD_PROC_SYMBOL(public_10005a00);

#define public_10008eca _public_10008eca
#define public_10008ee5 _public_10008ee5
#define public_10008ef7 _public_10008ef7
#define public_10008f09 _public_10008f09
#define public_10008f1d _public_10008f1d
#define public_10008f28 _public_10008f28
#define public_10008f41 _public_10008f41
#define public_10008f97 _public_10008f97
#define public_10009006 _public_10009006
#define public_10009014 _public_10009014
#define public_1000901d _public_1000901d
#define public_10009023 _public_10009023
#define public_10009034 _public_10009034
#define public_1000907f _public_1000907f
#define public_1000908a _public_1000908a
#define public_10009096 _public_10009096

PROC_DECLARE(0x10008eb0, internal_10008eb0, public_10008eb0);
extern "C" NAKED register_t __cdecl internal_10008eb0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        mov dword ptr ss : [esp], 0
        jne public_10008eca
        mov eax, 0xFFFFFF9A
        pop ecx
        ret 0xC
        public_10008eca : nop
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+0x9C]
        test esi, esi
        push edi
        jne public_10008ee5
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFF9A
        pop ebx
        pop ecx
        ret 0xC
        public_10008ee5 : nop
        cmp dword ptr ds : [esi], 0
        jne public_10008ef7
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFF9C
        pop ebx
        pop ecx
        ret 0xC
        public_10008ef7 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, ecx
        jne public_10008f09
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_10008f09 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [esi+0x5C]
        cmp ecx, eax
        mov dword ptr ds : [esi+0x14], ecx
        jbe public_10008f1d
        mov dword ptr ds : [esi+0x14], eax
        public_10008f1d : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jbe public_1000908a
        public_10008f28 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_10008f97
        mov eax, dword ptr ds : [esi+0x58]
        test eax, eax
        jbe public_10008f97
        mov edi, 0x4000
        cmp eax, edi
        jae public_10008f41
        mov edi, eax
        public_10008f41 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [esi+0x80]
        push 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x7C]
        push ecx
        push edx
        push eax
        call dword ptr ds : [esi+0x70]
        test eax, eax
        jne public_10009096
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [esi+0x7C]
        push edi
        push ecx
        push edx
        push eax
        call dword ptr ds : [esi+0x64]
        cmp eax, edi
        jne public_10009096
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [esi+0x58]
        add ecx, edi
        mov dword ptr ds : [esi+0x3C], ecx
        mov ecx, dword ptr ds : [esi]
        sub eax, edi
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edi
        public_10008f97 : nop
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        je public_10009006
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        jne public_10009006
        mov edx, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [esi+0x18]
        push 2
        lea eax, ds:[esi+4]
        push eax
        mov dword ptr ss : [esp+0x20], edx
        call public_10005a00
        mov edi, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x50]
        sub edi, ebp
        push edi
        push ecx
        push edx
        mov ebx, eax
        call public_10001a80
        mov edx, dword ptr ds : [esi+0x5C]
        mov ecx, dword ptr ss : [esp+0x10]
        sub edx, edi
        add ecx, edi
        cmp ebx, 1
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x5C], edx
        mov dword ptr ss : [esp+0x10], ecx
        je public_1000908a
        test ebx, ebx
        je public_1000907f
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        public_10009006 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_10009014
        mov ecx, dword ptr ds : [esi+0x58]
        test ecx, ecx
        je public_1000908a
        public_10009014 : nop
        mov edi, dword ptr ds : [esi+0x14]
        cmp edi, eax
        jb public_1000901d
        mov edi, eax
        public_1000901d : nop
        xor eax, eax
        test edi, edi
        jbe public_10009034
        public_10009023 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+ecx]
        mov edx, dword ptr ds : [esi+0x10]
        mov byte ptr ds : [eax+edx], cl
        inc eax
        cmp eax, edi
        jb public_10009023
        public_10009034 : nop
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x50]
        push edi
        push edx
        push eax
        call public_10001a80
        mov ecx, dword ptr ds : [esi+0x5C]
        mov ebp, dword ptr ds : [esi+0x14]
        mov ebx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x50], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, edi
        sub eax, edi
        mov dword ptr ds : [esi+0x5C], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        sub ebp, edi
        add ebx, edi
        add edx, edi
        add ecx, edi
        add eax, edi
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+0x18], ecx
        mov dword ptr ss : [esp+0x10], eax
        public_1000907f : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        ja public_10008f28
        public_1000908a : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_10009096 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x10008eb0)
    }
}

#undef public_10008eca
#undef public_10008ee5
#undef public_10008ef7
#undef public_10008f09
#undef public_10008f1d
#undef public_10008f28
#undef public_10008f41
#undef public_10008f97
#undef public_10009006
#undef public_10009014
#undef public_1000901d
#undef public_10009023
#undef public_10009034
#undef public_1000907f
#undef public_1000908a
#undef public_10009096
