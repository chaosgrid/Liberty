#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dadda9 _public_6dadda9
#define public_6daddc1 _public_6daddc1
#define public_6daddd1 _public_6daddd1
#define public_6daddf0 _public_6daddf0
#define public_6dade00 _public_6dade00
#define public_6dade1f _public_6dade1f
#define public_6dade2f _public_6dade2f
#define public_6dade4e _public_6dade4e
#define public_6dade5e _public_6dade5e
#define public_6dade7b _public_6dade7b
#define public_6dade8b _public_6dade8b
#define public_6dadea8 _public_6dadea8
#define public_6dadeb8 _public_6dadeb8
#define public_6dadee1 _public_6dadee1
#define public_6dadf12 _public_6dadf12

PROC_DECLARE(0x6dadd60, internal_6dadd60, public_6dadd60);
extern "C" NAKED register_t __cdecl internal_6dadd60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dadda9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dadda9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6daddc1
        mov dword ptr ds : [esi+0xC], ebp
        public_6daddc1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daddd1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6daddd1 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daddf0
        mov dword ptr ds : [esi+0xC], ebp
        public_6daddf0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dade00
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dade00 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dade1f
        mov dword ptr ds : [esi+0xC], ebp
        public_6dade1f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dade2f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dade2f : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dade4e
        mov dword ptr ds : [esi+0xC], ebp
        public_6dade4e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dade5e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dade5e : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dade7b
        mov dword ptr ds : [esi+0xC], ebp
        public_6dade7b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dade8b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dade8b : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x30]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dadea8
        mov dword ptr ds : [esi+0xC], ebp
        public_6dadea8 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dadeb8
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dadeb8 : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x34]
        fstp dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dadee1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dadee1 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6dadf12
        mov dword ptr ds : [ecx+0x10], esi
        public_6dadf12 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6dadd60)
    }
}

#undef public_6dadda9
#undef public_6daddc1
#undef public_6daddd1
#undef public_6daddf0
#undef public_6dade00
#undef public_6dade1f
#undef public_6dade2f
#undef public_6dade4e
#undef public_6dade5e
#undef public_6dade7b
#undef public_6dade8b
#undef public_6dadea8
#undef public_6dadeb8
#undef public_6dadee1
#undef public_6dadf12
