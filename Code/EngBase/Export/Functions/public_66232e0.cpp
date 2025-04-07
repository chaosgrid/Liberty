#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619a50);
CLANG_FORWARD_PROC_SYMBOL(public_661a0c0);
CLANG_FORWARD_PROC_SYMBOL(public_66232e0);
CLANG_FORWARD_PROC_SYMBOL(public_6624630);
CLANG_FORWARD_PROC_SYMBOL(public_6624f50);
CLANG_FORWARD_PROC_SYMBOL(public_6625290);
CLANG_FORWARD_PROC_SYMBOL(public_66254b0);

#define public_66232fc _public_66232fc
#define public_662330f _public_662330f
#define public_6623312 _public_6623312
#define public_6623316 _public_6623316
#define public_6623377 _public_6623377
#define public_662338f _public_662338f
#define public_6623399 _public_6623399
#define public_662339d _public_662339d
#define public_66233ab _public_66233ab
#define public_66233e6 _public_66233e6
#define public_66233f5 _public_66233f5
#define public_6623416 _public_6623416
#define public_6623437 _public_6623437
#define public_6623445 _public_6623445
#define public_6623464 _public_6623464
#define public_6623470 _public_6623470
#define public_662348c _public_662348c
#define public_66234a7 _public_66234a7
#define public_66234b0 _public_66234b0
#define public_66234d3 _public_66234d3

PROC_DECLARE(0x66232e0, internal_66232e0, public_66232e0);
extern "C" NAKED register_t __cdecl internal_66232e0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov al, 1
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov esi, ecx
        mov ebp, dword ptr ds : [ecx+4]
        cmp ebp, edx
        je public_6623316
        public_66232fc : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, ebp
        cmp eax, dword ptr ss : [ebp+0xC]
        setb al
        test al, al
        je public_662330f
        mov ebp, dword ptr ss : [ebp]
        jmp public_6623312
        public_662330f : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6623312 : nop
        cmp ebp, edx
        jne public_66232fc
        public_6623316 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_662348c
        push 0
        push esi
        mov ecx, edi
        call public_6624f50
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_66254b0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6623377
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6623377
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jb public_6623377
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_662339d
        mov dword ptr ds : [eax+8], ebx
        jmp public_662339d
        public_6623377 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_662338f
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6623399
        public_662338f : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6623399
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6623399 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_662339d : nop
        mov edx, dword ptr ds : [edi+4]
        mov esi, ebx
        cmp ebx, dword ptr ds : [edx+4]
        je public_6623470
        public_66233ab : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6623470
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6623416
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_66233e6
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6623464
        public_66233e6 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_66233f5
        mov esi, eax
        mov ecx, edi
        push esi
        call public_661a0c0
        public_66233f5 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6619a50
        jmp public_6623464
        public_6623416 : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6623437
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6623464
        public_6623437 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6623445
        mov esi, eax
        mov ecx, edi
        push esi
        call public_6619a50
        public_6623445 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, edi
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_661a0c0
        public_6623464 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_66233ab
        public_6623470 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_662348c : nop
        mov edx, esi
        test al, al
        mov dword ptr ss : [esp+0x10], edx
        je public_66234a7
        cmp esi, dword ptr ds : [ecx]
        je public_66234b0
        lea ecx, ss:[esp+0x10]
        call public_6625290
        mov edx, dword ptr ss : [esp+0x10]
        public_66234a7 : nop
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [ebx]
        cmp eax, ecx
        jae public_66234d3
        public_66234b0 : nop
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        push ebp
        push ecx
        mov ecx, edi
        call public_6624630
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_66234d3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x66232e0)
    }
}

#undef public_66232fc
#undef public_662330f
#undef public_6623312
#undef public_6623316
#undef public_6623377
#undef public_662338f
#undef public_6623399
#undef public_662339d
#undef public_66233ab
#undef public_66233e6
#undef public_66233f5
#undef public_6623416
#undef public_6623437
#undef public_6623445
#undef public_6623464
#undef public_6623470
#undef public_662348c
#undef public_66234a7
#undef public_66234b0
#undef public_66234d3
