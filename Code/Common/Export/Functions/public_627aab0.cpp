#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627aab0);
CLANG_FORWARD_PROC_SYMBOL(public_627b110);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627aad4 _public_627aad4
#define public_627aaf2 _public_627aaf2
#define public_627aafd _public_627aafd
#define public_627ab06 _public_627ab06
#define public_627ab11 _public_627ab11
#define public_627ab2d _public_627ab2d
#define public_627ab44 _public_627ab44
#define public_627ab51 _public_627ab51
#define public_627ab5c _public_627ab5c
#define public_627ab5f _public_627ab5f
#define public_627ab77 _public_627ab77
#define public_627ab82 _public_627ab82
#define public_627ab85 _public_627ab85
#define public_627ab9a _public_627ab9a
#define public_627aba5 _public_627aba5
#define public_627abb0 _public_627abb0
#define public_627abb3 _public_627abb3
#define public_627abc7 _public_627abc7
#define public_627abd3 _public_627abd3
#define public_627abdf _public_627abdf
#define public_627abe2 _public_627abe2
#define public_627ac00 _public_627ac00
#define public_627ac3f _public_627ac3f
#define public_627ac52 _public_627ac52
#define public_627ac5d _public_627ac5d
#define public_627ac60 _public_627ac60
#define public_627ac6b _public_627ac6b
#define public_627ac7e _public_627ac7e
#define public_627aca5 _public_627aca5
#define public_627acbf _public_627acbf
#define public_627ace5 _public_627ace5
#define public_627acf8 _public_627acf8
#define public_627ad05 _public_627ad05
#define public_627ad07 _public_627ad07
#define public_627ad12 _public_627ad12
#define public_627ad29 _public_627ad29
#define public_627ad41 _public_627ad41
#define public_627ad4e _public_627ad4e
#define public_627ad50 _public_627ad50
#define public_627ad5c _public_627ad5c
#define public_627ad86 _public_627ad86
#define public_627ad9e _public_627ad9e
#define public_627adae _public_627adae
#define public_627adb8 _public_627adb8
#define public_627addb _public_627addb
#define public_627adee _public_627adee
#define public_627adf9 _public_627adf9
#define public_627adfc _public_627adfc
#define public_627ae06 _public_627ae06
#define public_627ae2f _public_627ae2f
#define public_627ae42 _public_627ae42
#define public_627ae4f _public_627ae4f
#define public_627ae51 _public_627ae51
#define public_627ae54 _public_627ae54
#define public_627ae57 _public_627ae57
#define public_627ae5a _public_627ae5a

PROC_DECLARE(0x627aab0, internal_627aab0, public_627aab0);
extern "C" NAKED register_t __cdecl internal_627aab0()
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
        call public_627b110
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_627aaf2
        mov eax, dword ptr ds : [esi+8]
        public_627aad4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_627ab77
        mov dword ptr ds : [ecx+4], eax
        jmp public_627ab85
        public_627aaf2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_627aafd
        mov eax, edx
        jmp public_627aad4
        public_627aafd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_627ab11
        public_627ab06 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_627ab06
        public_627ab11 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_627aad4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_627ab2d
        mov dword ptr ds : [eax+4], ecx
        jmp public_627ab44
        public_627ab2d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_627ab44 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_627ab51
        mov dword ptr ds : [edx+4], ecx
        jmp public_627ab5f
        public_627ab51 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_627ab5c
        mov dword ptr ds : [edx], ecx
        jmp public_627ab5f
        public_627ab5c : nop
        mov dword ptr ds : [edx+8], ecx
        public_627ab5f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x1C]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov byte ptr ds : [ecx+0x1C], bl
        mov byte ptr ds : [esi+0x1C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_627abe2
        public_627ab77 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_627ab82
        mov dword ptr ds : [ecx], eax
        jmp public_627ab85
        public_627ab82 : nop
        mov dword ptr ds : [ecx+8], eax
        public_627ab85 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_627abb3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_627ab9a
        mov edx, dword ptr ds : [esi+4]
        jmp public_627abb0
        public_627ab9a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_627abb0
        public_627aba5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_627aba5
        public_627abb0 : nop
        mov dword ptr ss : [ebp], edx
        public_627abb3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_627abe2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_627abc7
        mov edx, dword ptr ds : [esi+4]
        jmp public_627abdf
        public_627abc7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_627abdf
        public_627abd3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_627abd3
        public_627abdf : nop
        mov dword ptr ss : [ebp+8], edx
        public_627abe2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov bl, 1
        cmp dl, bl
        jne public_627ae5a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_627ae57
        nop 
        public_627ac00 : nop
        cmp byte ptr ds : [eax+0x1C], bl
        jne public_627ae57
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_627acbf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_627ac6b
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_627ac3f
        mov dword ptr ds : [esi+4], ecx
        public_627ac3f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627ac52
        mov dword ptr ds : [esi+4], edx
        jmp public_627ac60
        public_627ac52 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_627ac5d
        mov dword ptr ds : [esi], edx
        jmp public_627ac60
        public_627ac5d : nop
        mov dword ptr ds : [esi+8], edx
        public_627ac60 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_627ac6b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_627ac7e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        je public_627ad29
        public_627ac7e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_627ad5c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_627aca5
        mov dword ptr ds : [esi+4], ecx
        public_627aca5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627ad41
        mov dword ptr ds : [esi+4], edx
        jmp public_627ad50
        public_627acbf : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_627ad12
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_627ace5
        mov dword ptr ds : [esi+4], ecx
        public_627ace5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627acf8
        mov dword ptr ds : [esi+4], edx
        jmp public_627ad07
        public_627acf8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_627ad05
        mov dword ptr ds : [esi+8], edx
        jmp public_627ad07
        public_627ad05 : nop
        mov dword ptr ds : [esi], edx
        public_627ad07 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_627ad12 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_627adb8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_627adb8
        public_627ad29 : nop
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_627ac00
        jmp public_627ae57
        public_627ad41 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_627ad4e
        mov dword ptr ds : [esi+8], edx
        jmp public_627ad50
        public_627ad4e : nop
        mov dword ptr ds : [esi], edx
        public_627ad50 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_627ad5c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_627ad86
        mov dword ptr ds : [esi+4], ecx
        public_627ad86 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627ad9e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_627ae54
        public_627ad9e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_627adae
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_627ae54
        public_627adae : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_627ae54
        public_627adb8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_627ae06
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_627addb
        mov dword ptr ds : [esi+4], ecx
        public_627addb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627adee
        mov dword ptr ds : [esi+4], edx
        jmp public_627adfc
        public_627adee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_627adf9
        mov dword ptr ds : [esi], edx
        jmp public_627adfc
        public_627adf9 : nop
        mov dword ptr ds : [esi+8], edx
        public_627adfc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_627ae06 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_627ae2f
        mov dword ptr ds : [esi+4], ecx
        public_627ae2f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_627ae42
        mov dword ptr ds : [esi+4], edx
        jmp public_627ae51
        public_627ae42 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_627ae4f
        mov dword ptr ds : [esi+8], edx
        jmp public_627ae51
        public_627ae4f : nop
        mov dword ptr ds : [esi], edx
        public_627ae51 : nop
        mov dword ptr ds : [edx+8], ecx
        public_627ae54 : nop
        mov dword ptr ds : [ecx+4], edx
        public_627ae57 : nop
        mov byte ptr ds : [eax+0x1C], bl
        public_627ae5a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x627aab0)
    }
}

#undef public_627aad4
#undef public_627aaf2
#undef public_627aafd
#undef public_627ab06
#undef public_627ab11
#undef public_627ab2d
#undef public_627ab44
#undef public_627ab51
#undef public_627ab5c
#undef public_627ab5f
#undef public_627ab77
#undef public_627ab82
#undef public_627ab85
#undef public_627ab9a
#undef public_627aba5
#undef public_627abb0
#undef public_627abb3
#undef public_627abc7
#undef public_627abd3
#undef public_627abdf
#undef public_627abe2
#undef public_627ac00
#undef public_627ac3f
#undef public_627ac52
#undef public_627ac5d
#undef public_627ac60
#undef public_627ac6b
#undef public_627ac7e
#undef public_627aca5
#undef public_627acbf
#undef public_627ace5
#undef public_627acf8
#undef public_627ad05
#undef public_627ad07
#undef public_627ad12
#undef public_627ad29
#undef public_627ad41
#undef public_627ad4e
#undef public_627ad50
#undef public_627ad5c
#undef public_627ad86
#undef public_627ad9e
#undef public_627adae
#undef public_627adb8
#undef public_627addb
#undef public_627adee
#undef public_627adf9
#undef public_627adfc
#undef public_627ae06
#undef public_627ae2f
#undef public_627ae42
#undef public_627ae4f
#undef public_627ae51
#undef public_627ae54
#undef public_627ae57
#undef public_627ae5a
