#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2f00);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3480);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef2f60 _public_6ef2f60
#define public_6ef2f84 _public_6ef2f84
#define public_6ef2f88 _public_6ef2f88
#define public_6ef2f8d _public_6ef2f8d
#define public_6ef2fa9 _public_6ef2fa9
#define public_6ef2fbe _public_6ef2fbe
#define public_6ef2fc4 _public_6ef2fc4
#define public_6ef2fd4 _public_6ef2fd4
#define public_6ef3013 _public_6ef3013
#define public_6ef302c _public_6ef302c
#define public_6ef303f _public_6ef303f
#define public_6ef304a _public_6ef304a
#define public_6ef304d _public_6ef304d
#define public_6ef3052 _public_6ef3052
#define public_6ef307a _public_6ef307a
#define public_6ef3093 _public_6ef3093
#define public_6ef30a6 _public_6ef30a6
#define public_6ef30b0 _public_6ef30b0
#define public_6ef30d1 _public_6ef30d1
#define public_6ef30e9 _public_6ef30e9
#define public_6ef30fc _public_6ef30fc
#define public_6ef3109 _public_6ef3109
#define public_6ef310b _public_6ef310b
#define public_6ef3111 _public_6ef3111
#define public_6ef3139 _public_6ef3139
#define public_6ef314c _public_6ef314c
#define public_6ef3157 _public_6ef3157
#define public_6ef315a _public_6ef315a
#define public_6ef315c _public_6ef315c
#define public_6ef315f _public_6ef315f
#define public_6ef316f _public_6ef316f

PROC_DECLARE(0x6ef2f00, internal_6ef2f00, public_6ef2f00);
extern "C" NAKED register_t __cdecl internal_6ef2f00()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        push 0x54
        mov esi, ecx
        call public_6fa912a
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0x28]
        mov edi, eax
        mov dword ptr ds : [edi+4], ebp
        mov byte ptr ds : [edi+0x50], 0
        mov byte ptr ds : [edi+0x51], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[edi+0xC]
        push ebx
        push edx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ds : [edi+8], ecx
        call public_6ef3480
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp ebp, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ef2fa9
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ef2fa9
        lea edi, ss:[ebp+0x10]
        lea eax, ds:[ebx+4]
        lea esp, ss:[esp]
        public_6ef2f60 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [edi]
        mov cl, dl
        cmp dl, bl
        jne public_6ef2f88
        test cl, cl
        je public_6ef2f84
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [edi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ef2f88
        add eax, 2
        add edi, 2
        test cl, cl
        jne public_6ef2f60
        public_6ef2f84 : nop
        xor eax, eax
        jmp public_6ef2f8d
        public_6ef2f88 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ef2f8d : nop
        test eax, eax
        mov edi, dword ptr ss : [esp+0x10]
        jl public_6ef2fa9
        mov eax, edi
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [eax+8]
        jne public_6ef2fc4
        mov ecx, edi
        mov dword ptr ds : [eax+8], ecx
        jmp public_6ef2fc4
        public_6ef2fa9 : nop
        mov dword ptr ss : [ebp], edi
        mov eax, dword ptr ds : [esi+4]
        cmp ebp, eax
        jne public_6ef2fbe
        mov dword ptr ds : [eax+4], edi
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], edi
        jmp public_6ef2fc4
        public_6ef2fbe : nop
        cmp ebp, dword ptr ds : [eax]
        jne public_6ef2fc4
        mov dword ptr ds : [eax], edi
        public_6ef2fc4 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [ecx+4]
        mov eax, edi
        mov bl, 1
        je public_6ef316f
        public_6ef2fd4 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6ef316f
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ef30b0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x50], 0
        jne public_6ef3013
        mov byte ptr ds : [ecx+0x50], bl
        mov byte ptr ds : [edx+0x50], bl
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ef315f
        public_6ef3013 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ef3052
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ef302c
        mov dword ptr ds : [edx+4], eax
        public_6ef302c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ef303f
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ef304d
        public_6ef303f : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ef304a
        mov dword ptr ds : [edx], ecx
        jmp public_6ef304d
        public_6ef304a : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ef304d : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ef3052 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], bl
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ef307a
        mov dword ptr ds : [edi+4], ecx
        public_6ef307a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ef3093
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ef315c
        public_6ef3093 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ef30a6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ef315c
        public_6ef30a6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ef315c
        public_6ef30b0 : nop
        cmp byte ptr ds : [edx+0x50], 0
        jne public_6ef30d1
        mov byte ptr ds : [ecx+0x50], bl
        mov byte ptr ds : [edx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x50], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ef315f
        public_6ef30d1 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ef3111
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ef30e9
        mov dword ptr ds : [edx+4], eax
        public_6ef30e9 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ef30fc
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ef310b
        public_6ef30fc : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ef3109
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ef310b
        public_6ef3109 : nop
        mov dword ptr ds : [edx], ecx
        public_6ef310b : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ef3111 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], bl
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ef3139
        mov dword ptr ds : [edi+4], ecx
        public_6ef3139 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ef314c
        mov dword ptr ds : [edi+4], edx
        jmp public_6ef315a
        public_6ef314c : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ef3157
        mov dword ptr ds : [edi], edx
        jmp public_6ef315a
        public_6ef3157 : nop
        mov dword ptr ds : [edi+8], edx
        public_6ef315a : nop
        mov dword ptr ds : [edx], ecx
        public_6ef315c : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ef315f : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        mov edi, dword ptr ss : [esp+0x10]
        jne public_6ef2fd4
        public_6ef316f : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x50], bl
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6ef2f00)
    }
}

#undef public_6ef2f60
#undef public_6ef2f84
#undef public_6ef2f88
#undef public_6ef2f8d
#undef public_6ef2fa9
#undef public_6ef2fbe
#undef public_6ef2fc4
#undef public_6ef2fd4
#undef public_6ef3013
#undef public_6ef302c
#undef public_6ef303f
#undef public_6ef304a
#undef public_6ef304d
#undef public_6ef3052
#undef public_6ef307a
#undef public_6ef3093
#undef public_6ef30a6
#undef public_6ef30b0
#undef public_6ef30d1
#undef public_6ef30e9
#undef public_6ef30fc
#undef public_6ef3109
#undef public_6ef310b
#undef public_6ef3111
#undef public_6ef3139
#undef public_6ef314c
#undef public_6ef3157
#undef public_6ef315a
#undef public_6ef315c
#undef public_6ef315f
#undef public_6ef316f
