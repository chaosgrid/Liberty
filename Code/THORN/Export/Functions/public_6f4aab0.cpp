#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39230);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f4aad4 _public_6f4aad4
#define public_6f4aaf2 _public_6f4aaf2
#define public_6f4aafd _public_6f4aafd
#define public_6f4ab06 _public_6f4ab06
#define public_6f4ab11 _public_6f4ab11
#define public_6f4ab2d _public_6f4ab2d
#define public_6f4ab44 _public_6f4ab44
#define public_6f4ab51 _public_6f4ab51
#define public_6f4ab5c _public_6f4ab5c
#define public_6f4ab5f _public_6f4ab5f
#define public_6f4ab77 _public_6f4ab77
#define public_6f4ab82 _public_6f4ab82
#define public_6f4ab85 _public_6f4ab85
#define public_6f4ab9a _public_6f4ab9a
#define public_6f4aba5 _public_6f4aba5
#define public_6f4abb0 _public_6f4abb0
#define public_6f4abb3 _public_6f4abb3
#define public_6f4abc7 _public_6f4abc7
#define public_6f4abd3 _public_6f4abd3
#define public_6f4abdf _public_6f4abdf
#define public_6f4abe2 _public_6f4abe2
#define public_6f4ac00 _public_6f4ac00
#define public_6f4ac3f _public_6f4ac3f
#define public_6f4ac52 _public_6f4ac52
#define public_6f4ac5d _public_6f4ac5d
#define public_6f4ac60 _public_6f4ac60
#define public_6f4ac6b _public_6f4ac6b
#define public_6f4ac7e _public_6f4ac7e
#define public_6f4aca5 _public_6f4aca5
#define public_6f4acbf _public_6f4acbf
#define public_6f4ace5 _public_6f4ace5
#define public_6f4acf8 _public_6f4acf8
#define public_6f4ad05 _public_6f4ad05
#define public_6f4ad07 _public_6f4ad07
#define public_6f4ad12 _public_6f4ad12
#define public_6f4ad29 _public_6f4ad29
#define public_6f4ad41 _public_6f4ad41
#define public_6f4ad4e _public_6f4ad4e
#define public_6f4ad50 _public_6f4ad50
#define public_6f4ad5c _public_6f4ad5c
#define public_6f4ad86 _public_6f4ad86
#define public_6f4ad9e _public_6f4ad9e
#define public_6f4adae _public_6f4adae
#define public_6f4adb8 _public_6f4adb8
#define public_6f4addb _public_6f4addb
#define public_6f4adee _public_6f4adee
#define public_6f4adf9 _public_6f4adf9
#define public_6f4adfc _public_6f4adfc
#define public_6f4ae06 _public_6f4ae06
#define public_6f4ae2f _public_6f4ae2f
#define public_6f4ae42 _public_6f4ae42
#define public_6f4ae4f _public_6f4ae4f
#define public_6f4ae51 _public_6f4ae51
#define public_6f4ae54 _public_6f4ae54
#define public_6f4ae57 _public_6f4ae57
#define public_6f4ae5e _public_6f4ae5e

PROC_DECLARE(0x6f4aab0, internal_6f4aab0, public_6f4aab0);
extern "C" NAKED register_t __cdecl internal_6f4aab0()
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
        call public_6f3c570
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f4aaf2
        mov eax, dword ptr ds : [esi+8]
        public_6f4aad4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f4ab77
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f4ab85
        public_6f4aaf2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f4aafd
        mov eax, edx
        jmp public_6f4aad4
        public_6f4aafd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_6f4ab11
        public_6f4ab06 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_6f4ab06
        public_6f4ab11 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f4aad4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4ab2d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f4ab44
        public_6f4ab2d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f4ab44 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f4ab51
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4ab5f
        public_6f4ab51 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f4ab5c
        mov dword ptr ds : [edx], ecx
        jmp public_6f4ab5f
        public_6f4ab5c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4ab5f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x2C]
        mov dl, byte ptr ds : [ecx+0x2C]
        mov byte ptr ds : [ecx+0x2C], bl
        mov byte ptr ds : [esi+0x2C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f4abe2
        public_6f4ab77 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f4ab82
        mov dword ptr ds : [ecx], eax
        jmp public_6f4ab85
        public_6f4ab82 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f4ab85 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f4abb3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f4ab9a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f4abb0
        public_6f4ab9a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_6f4abb0
        public_6f4aba5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_6f4aba5
        public_6f4abb0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f4abb3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f4abe2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f4abc7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f4abdf
        public_6f4abc7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_6f4abdf
        public_6f4abd3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_6f4abd3
        public_6f4abdf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f4abe2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x2C]
        mov bl, 1
        cmp cl, bl
        jne public_6f4ae5e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f4ae57
        nop 
        public_6f4ac00 : nop
        cmp byte ptr ds : [eax+0x2C], bl
        jne public_6f4ae57
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f4acbf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f4ac6b
        mov byte ptr ds : [ecx+0x2C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4ac3f
        mov dword ptr ds : [esi+4], ecx
        public_6f4ac3f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4ac52
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4ac60
        public_6f4ac52 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4ac5d
        mov dword ptr ds : [esi], edx
        jmp public_6f4ac60
        public_6f4ac5d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f4ac60 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f4ac6b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6f4ac7e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        je public_6f4ad29
        public_6f4ac7e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6f4ad5c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4aca5
        mov dword ptr ds : [esi+4], ecx
        public_6f4aca5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4ad41
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4ad50
        public_6f4acbf : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f4ad12
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4ace5
        mov dword ptr ds : [esi+4], ecx
        public_6f4ace5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4acf8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4ad07
        public_6f4acf8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4ad05
        mov dword ptr ds : [esi+8], edx
        jmp public_6f4ad07
        public_6f4ad05 : nop
        mov dword ptr ds : [esi], edx
        public_6f4ad07 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f4ad12 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6f4adb8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6f4adb8
        public_6f4ad29 : nop
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f4ac00
        jmp public_6f4ae57
        public_6f4ad41 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4ad4e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f4ad50
        public_6f4ad4e : nop
        mov dword ptr ds : [esi], edx
        public_6f4ad50 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f4ad5c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4ad86
        mov dword ptr ds : [esi+4], ecx
        public_6f4ad86 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4ad9e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f4ae54
        public_6f4ad9e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4adae
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f4ae54
        public_6f4adae : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f4ae54
        public_6f4adb8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6f4ae06
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4addb
        mov dword ptr ds : [esi+4], ecx
        public_6f4addb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4adee
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4adfc
        public_6f4adee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4adf9
        mov dword ptr ds : [esi], edx
        jmp public_6f4adfc
        public_6f4adf9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f4adfc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f4ae06 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4ae2f
        mov dword ptr ds : [esi+4], ecx
        public_6f4ae2f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4ae42
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4ae51
        public_6f4ae42 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4ae4f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f4ae51
        public_6f4ae4f : nop
        mov dword ptr ds : [esi], edx
        public_6f4ae51 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4ae54 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f4ae57 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x2C], bl
        public_6f4ae5e : nop
        lea ecx, ds:[esi+0xC]
        call public_6f39230
        push esi
        call public_6f57e26
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
        UNREACHABLE_TRAP(0x6f4aab0)
    }
}

#undef public_6f4aad4
#undef public_6f4aaf2
#undef public_6f4aafd
#undef public_6f4ab06
#undef public_6f4ab11
#undef public_6f4ab2d
#undef public_6f4ab44
#undef public_6f4ab51
#undef public_6f4ab5c
#undef public_6f4ab5f
#undef public_6f4ab77
#undef public_6f4ab82
#undef public_6f4ab85
#undef public_6f4ab9a
#undef public_6f4aba5
#undef public_6f4abb0
#undef public_6f4abb3
#undef public_6f4abc7
#undef public_6f4abd3
#undef public_6f4abdf
#undef public_6f4abe2
#undef public_6f4ac00
#undef public_6f4ac3f
#undef public_6f4ac52
#undef public_6f4ac5d
#undef public_6f4ac60
#undef public_6f4ac6b
#undef public_6f4ac7e
#undef public_6f4aca5
#undef public_6f4acbf
#undef public_6f4ace5
#undef public_6f4acf8
#undef public_6f4ad05
#undef public_6f4ad07
#undef public_6f4ad12
#undef public_6f4ad29
#undef public_6f4ad41
#undef public_6f4ad4e
#undef public_6f4ad50
#undef public_6f4ad5c
#undef public_6f4ad86
#undef public_6f4ad9e
#undef public_6f4adae
#undef public_6f4adb8
#undef public_6f4addb
#undef public_6f4adee
#undef public_6f4adf9
#undef public_6f4adfc
#undef public_6f4ae06
#undef public_6f4ae2f
#undef public_6f4ae42
#undef public_6f4ae4f
#undef public_6f4ae51
#undef public_6f4ae54
#undef public_6f4ae57
#undef public_6f4ae5e
