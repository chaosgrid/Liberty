#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d10fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11330);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d11012 _public_6d11012
#define public_6d11026 _public_6d11026
#define public_6d1102c _public_6d1102c
#define public_6d11040 _public_6d11040
#define public_6d11090 _public_6d11090
#define public_6d110a9 _public_6d110a9
#define public_6d110bc _public_6d110bc
#define public_6d110c7 _public_6d110c7
#define public_6d110ca _public_6d110ca
#define public_6d110cf _public_6d110cf
#define public_6d110fe _public_6d110fe
#define public_6d11117 _public_6d11117
#define public_6d1112a _public_6d1112a
#define public_6d11134 _public_6d11134
#define public_6d11163 _public_6d11163
#define public_6d1117b _public_6d1117b
#define public_6d1118e _public_6d1118e
#define public_6d1119b _public_6d1119b
#define public_6d1119d _public_6d1119d
#define public_6d111a3 _public_6d111a3
#define public_6d111d2 _public_6d111d2
#define public_6d111e5 _public_6d111e5
#define public_6d111f0 _public_6d111f0
#define public_6d111f3 _public_6d111f3
#define public_6d111f5 _public_6d111f5
#define public_6d111f8 _public_6d111f8
#define public_6d11204 _public_6d11204

PROC_DECLARE(0x6d10fa0, internal_6d10fa0, public_6d10fa0);
extern "C" NAKED register_t __cdecl internal_6d10fa0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x114
        mov esi, ecx
        call public_6d60012
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x110], 0
        mov byte ptr ds : [ebx+0x111], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6d11330
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6d11012
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6d11012
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6d11012
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6d1102c
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d1102c
        public_6d11012 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6d11026
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6d1102c
        public_6d11026 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6d1102c
        mov dword ptr ds : [eax], ebx
        public_6d1102c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6d11204
        lea ebx, ds:[ebx]
        public_6d11040 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x110]
        test dl, dl
        jne public_6d11204
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6d11134
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x110], 0
        jne public_6d11090
        mov byte ptr ds : [ecx+0x110], 1
        mov byte ptr ds : [edx+0x110], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x110], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6d111f8
        public_6d11090 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d110cf
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d110a9
        mov dword ptr ds : [edx+4], eax
        public_6d110a9 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d110bc
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d110ca
        public_6d110bc : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6d110c7
        mov dword ptr ds : [edx], ecx
        jmp public_6d110ca
        public_6d110c7 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d110ca : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d110cf : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x110], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x110], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d110fe
        mov dword ptr ds : [edi+4], ecx
        public_6d110fe : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d11117
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d111f5
        public_6d11117 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d1112a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d111f5
        public_6d1112a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d111f5
        public_6d11134 : nop
        cmp byte ptr ds : [edx+0x110], 0
        jne public_6d11163
        mov byte ptr ds : [ecx+0x110], 1
        mov byte ptr ds : [edx+0x110], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x110], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6d111f8
        public_6d11163 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6d111a3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d1117b
        mov dword ptr ds : [edx+4], eax
        public_6d1117b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1118e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d1119d
        public_6d1118e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d1119b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d1119d
        public_6d1119b : nop
        mov dword ptr ds : [edx], ecx
        public_6d1119d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d111a3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x110], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x110], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d111d2
        mov dword ptr ds : [edi+4], ecx
        public_6d111d2 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d111e5
        mov dword ptr ds : [edi+4], edx
        jmp public_6d111f3
        public_6d111e5 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6d111f0
        mov dword ptr ds : [edi], edx
        jmp public_6d111f3
        public_6d111f0 : nop
        mov dword ptr ds : [edi+8], edx
        public_6d111f3 : nop
        mov dword ptr ds : [edx], ecx
        public_6d111f5 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d111f8 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d11040
        public_6d11204 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x110], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d10fa0)
    }
}

#undef public_6d11012
#undef public_6d11026
#undef public_6d1102c
#undef public_6d11040
#undef public_6d11090
#undef public_6d110a9
#undef public_6d110bc
#undef public_6d110c7
#undef public_6d110ca
#undef public_6d110cf
#undef public_6d110fe
#undef public_6d11117
#undef public_6d1112a
#undef public_6d11134
#undef public_6d11163
#undef public_6d1117b
#undef public_6d1118e
#undef public_6d1119b
#undef public_6d1119d
#undef public_6d111a3
#undef public_6d111d2
#undef public_6d111e5
#undef public_6d111f0
#undef public_6d111f3
#undef public_6d111f5
#undef public_6d111f8
#undef public_6d11204
