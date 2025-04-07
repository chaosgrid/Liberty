#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea76e0);
CLANG_FORWARD_PROC_SYMBOL(public_6efd050);
CLANG_FORWARD_PROC_SYMBOL(public_6efd910);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6efd934 _public_6efd934
#define public_6efd952 _public_6efd952
#define public_6efd95d _public_6efd95d
#define public_6efd966 _public_6efd966
#define public_6efd971 _public_6efd971
#define public_6efd98d _public_6efd98d
#define public_6efd9a4 _public_6efd9a4
#define public_6efd9b1 _public_6efd9b1
#define public_6efd9bc _public_6efd9bc
#define public_6efd9bf _public_6efd9bf
#define public_6efd9d7 _public_6efd9d7
#define public_6efd9e2 _public_6efd9e2
#define public_6efd9e5 _public_6efd9e5
#define public_6efd9fa _public_6efd9fa
#define public_6efda05 _public_6efda05
#define public_6efda10 _public_6efda10
#define public_6efda13 _public_6efda13
#define public_6efda27 _public_6efda27
#define public_6efda33 _public_6efda33
#define public_6efda3f _public_6efda3f
#define public_6efda42 _public_6efda42
#define public_6efda60 _public_6efda60
#define public_6efda9f _public_6efda9f
#define public_6efdab2 _public_6efdab2
#define public_6efdabd _public_6efdabd
#define public_6efdac0 _public_6efdac0
#define public_6efdacb _public_6efdacb
#define public_6efdade _public_6efdade
#define public_6efdb05 _public_6efdb05
#define public_6efdb1f _public_6efdb1f
#define public_6efdb45 _public_6efdb45
#define public_6efdb58 _public_6efdb58
#define public_6efdb65 _public_6efdb65
#define public_6efdb67 _public_6efdb67
#define public_6efdb72 _public_6efdb72
#define public_6efdb89 _public_6efdb89
#define public_6efdba1 _public_6efdba1
#define public_6efdbae _public_6efdbae
#define public_6efdbb0 _public_6efdbb0
#define public_6efdbbc _public_6efdbbc
#define public_6efdbe6 _public_6efdbe6
#define public_6efdbfe _public_6efdbfe
#define public_6efdc0e _public_6efdc0e
#define public_6efdc18 _public_6efdc18
#define public_6efdc3b _public_6efdc3b
#define public_6efdc4e _public_6efdc4e
#define public_6efdc59 _public_6efdc59
#define public_6efdc5c _public_6efdc5c
#define public_6efdc66 _public_6efdc66
#define public_6efdc8f _public_6efdc8f
#define public_6efdca2 _public_6efdca2
#define public_6efdcaf _public_6efdcaf
#define public_6efdcb1 _public_6efdcb1
#define public_6efdcb4 _public_6efdcb4
#define public_6efdcb7 _public_6efdcb7
#define public_6efdcbe _public_6efdcbe

PROC_DECLARE(0x6efd910, internal_6efd910, public_6efd910);
extern "C" NAKED register_t __cdecl internal_6efd910()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6ea76e0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6efd952
        mov eax, dword ptr ds : [esi+8]
        public_6efd934 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6efd9d7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6efd9e5
        public_6efd952 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6efd95d
        mov eax, edx
        jmp public_6efd934
        public_6efd95d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        jne public_6efd971
        public_6efd966 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        je public_6efd966
        public_6efd971 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6efd934
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6efd98d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6efd9a4
        public_6efd98d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6efd9a4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6efd9b1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6efd9bf
        public_6efd9b1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6efd9bc
        mov dword ptr ds : [edx], ecx
        jmp public_6efd9bf
        public_6efd9bc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6efd9bf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x54]
        mov dl, byte ptr ds : [ecx+0x54]
        mov byte ptr ds : [ecx+0x54], bl
        mov byte ptr ds : [esi+0x54], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6efda42
        public_6efd9d7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6efd9e2
        mov dword ptr ds : [ecx], eax
        jmp public_6efd9e5
        public_6efd9e2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6efd9e5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6efda13
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6efd9fa
        mov edx, dword ptr ds : [esi+4]
        jmp public_6efda10
        public_6efd9fa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        mov edx, eax
        jne public_6efda10
        public_6efda05 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        je public_6efda05
        public_6efda10 : nop
        mov dword ptr ss : [ebp], edx
        public_6efda13 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6efda42
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6efda27
        mov edx, dword ptr ds : [esi+4]
        jmp public_6efda3f
        public_6efda27 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        mov edx, eax
        jne public_6efda3f
        public_6efda33 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        je public_6efda33
        public_6efda3f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6efda42 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x54]
        mov bl, 1
        cmp cl, bl
        jne public_6efdcbe
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6efdcb7
        nop 
        public_6efda60 : nop
        cmp byte ptr ds : [eax+0x54], bl
        jne public_6efdcb7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6efdb1f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_6efdacb
        mov byte ptr ds : [ecx+0x54], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x54], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6efda9f
        mov dword ptr ds : [esi+4], ecx
        public_6efda9f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6efdab2
        mov dword ptr ds : [esi+4], edx
        jmp public_6efdac0
        public_6efdab2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6efdabd
        mov dword ptr ds : [esi], edx
        jmp public_6efdac0
        public_6efdabd : nop
        mov dword ptr ds : [esi+8], edx
        public_6efdac0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6efdacb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_6efdade
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        je public_6efdb89
        public_6efdade : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_6efdbbc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x54], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x54], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6efdb05
        mov dword ptr ds : [esi+4], ecx
        public_6efdb05 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6efdba1
        mov dword ptr ds : [esi+4], edx
        jmp public_6efdbb0
        public_6efdb1f : nop
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_6efdb72
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6efdb45
        mov dword ptr ds : [esi+4], ecx
        public_6efdb45 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6efdb58
        mov dword ptr ds : [esi+4], edx
        jmp public_6efdb67
        public_6efdb58 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6efdb65
        mov dword ptr ds : [esi+8], edx
        jmp public_6efdb67
        public_6efdb65 : nop
        mov dword ptr ds : [esi], edx
        public_6efdb67 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6efdb72 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_6efdc18
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_6efdc18
        public_6efdb89 : nop
        mov byte ptr ds : [ecx+0x54], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6efda60
        jmp public_6efdcb7
        public_6efdba1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6efdbae
        mov dword ptr ds : [esi+8], edx
        jmp public_6efdbb0
        public_6efdbae : nop
        mov dword ptr ds : [esi], edx
        public_6efdbb0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6efdbbc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x54]
        mov byte ptr ds : [ecx+0x54], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x54], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6efdbe6
        mov dword ptr ds : [esi+4], ecx
        public_6efdbe6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6efdbfe
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6efdcb4
        public_6efdbfe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6efdc0e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6efdcb4
        public_6efdc0e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6efdcb4
        public_6efdc18 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_6efdc66
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x54], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x54], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6efdc3b
        mov dword ptr ds : [esi+4], ecx
        public_6efdc3b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6efdc4e
        mov dword ptr ds : [esi+4], edx
        jmp public_6efdc5c
        public_6efdc4e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6efdc59
        mov dword ptr ds : [esi], edx
        jmp public_6efdc5c
        public_6efdc59 : nop
        mov dword ptr ds : [esi+8], edx
        public_6efdc5c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6efdc66 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x54]
        mov byte ptr ds : [ecx+0x54], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x54], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6efdc8f
        mov dword ptr ds : [esi+4], ecx
        public_6efdc8f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6efdca2
        mov dword ptr ds : [esi+4], edx
        jmp public_6efdcb1
        public_6efdca2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6efdcaf
        mov dword ptr ds : [esi+8], edx
        jmp public_6efdcb1
        public_6efdcaf : nop
        mov dword ptr ds : [esi], edx
        public_6efdcb1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6efdcb4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6efdcb7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x54], bl
        public_6efdcbe : nop
        lea ecx, ds:[esi+0xC]
        call public_6efd050
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6efd910)
    }
}

#undef public_6efd934
#undef public_6efd952
#undef public_6efd95d
#undef public_6efd966
#undef public_6efd971
#undef public_6efd98d
#undef public_6efd9a4
#undef public_6efd9b1
#undef public_6efd9bc
#undef public_6efd9bf
#undef public_6efd9d7
#undef public_6efd9e2
#undef public_6efd9e5
#undef public_6efd9fa
#undef public_6efda05
#undef public_6efda10
#undef public_6efda13
#undef public_6efda27
#undef public_6efda33
#undef public_6efda3f
#undef public_6efda42
#undef public_6efda60
#undef public_6efda9f
#undef public_6efdab2
#undef public_6efdabd
#undef public_6efdac0
#undef public_6efdacb
#undef public_6efdade
#undef public_6efdb05
#undef public_6efdb1f
#undef public_6efdb45
#undef public_6efdb58
#undef public_6efdb65
#undef public_6efdb67
#undef public_6efdb72
#undef public_6efdb89
#undef public_6efdba1
#undef public_6efdbae
#undef public_6efdbb0
#undef public_6efdbbc
#undef public_6efdbe6
#undef public_6efdbfe
#undef public_6efdc0e
#undef public_6efdc18
#undef public_6efdc3b
#undef public_6efdc4e
#undef public_6efdc59
#undef public_6efdc5c
#undef public_6efdc66
#undef public_6efdc8f
#undef public_6efdca2
#undef public_6efdcaf
#undef public_6efdcb1
#undef public_6efdcb4
#undef public_6efdcb7
#undef public_6efdcbe
