#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bec720);
CLANG_FORWARD_PROC_SYMBOL(public_6beceb0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bec744 _public_6bec744
#define public_6bec762 _public_6bec762
#define public_6bec76d _public_6bec76d
#define public_6bec776 _public_6bec776
#define public_6bec781 _public_6bec781
#define public_6bec79d _public_6bec79d
#define public_6bec7b4 _public_6bec7b4
#define public_6bec7c1 _public_6bec7c1
#define public_6bec7cc _public_6bec7cc
#define public_6bec7cf _public_6bec7cf
#define public_6bec7e7 _public_6bec7e7
#define public_6bec7f2 _public_6bec7f2
#define public_6bec7f5 _public_6bec7f5
#define public_6bec80a _public_6bec80a
#define public_6bec815 _public_6bec815
#define public_6bec820 _public_6bec820
#define public_6bec823 _public_6bec823
#define public_6bec837 _public_6bec837
#define public_6bec843 _public_6bec843
#define public_6bec84f _public_6bec84f
#define public_6bec852 _public_6bec852
#define public_6bec870 _public_6bec870
#define public_6bec8af _public_6bec8af
#define public_6bec8c2 _public_6bec8c2
#define public_6bec8cd _public_6bec8cd
#define public_6bec8d0 _public_6bec8d0
#define public_6bec8db _public_6bec8db
#define public_6bec8ee _public_6bec8ee
#define public_6bec915 _public_6bec915
#define public_6bec92f _public_6bec92f
#define public_6bec955 _public_6bec955
#define public_6bec968 _public_6bec968
#define public_6bec975 _public_6bec975
#define public_6bec977 _public_6bec977
#define public_6bec982 _public_6bec982
#define public_6bec999 _public_6bec999
#define public_6bec9b1 _public_6bec9b1
#define public_6bec9be _public_6bec9be
#define public_6bec9c0 _public_6bec9c0
#define public_6bec9cc _public_6bec9cc
#define public_6bec9f6 _public_6bec9f6
#define public_6beca0e _public_6beca0e
#define public_6beca1e _public_6beca1e
#define public_6beca28 _public_6beca28
#define public_6beca4b _public_6beca4b
#define public_6beca5e _public_6beca5e
#define public_6beca69 _public_6beca69
#define public_6beca6c _public_6beca6c
#define public_6beca76 _public_6beca76
#define public_6beca9f _public_6beca9f
#define public_6becab2 _public_6becab2
#define public_6becabf _public_6becabf
#define public_6becac1 _public_6becac1
#define public_6becac4 _public_6becac4
#define public_6becac7 _public_6becac7
#define public_6becaca _public_6becaca

PROC_DECLARE(0x6bec720, internal_6bec720, public_6bec720);
extern "C" NAKED register_t __cdecl internal_6bec720()
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
        call public_6beceb0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6bec762
        mov eax, dword ptr ds : [esi+8]
        public_6bec744 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6bec7e7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6bec7f5
        public_6bec762 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6bec76d
        mov eax, edx
        jmp public_6bec744
        public_6bec76d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6bec781
        public_6bec776 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6bec776
        public_6bec781 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6bec744
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6bec79d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6bec7b4
        public_6bec79d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6bec7b4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6bec7c1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6bec7cf
        public_6bec7c1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6bec7cc
        mov dword ptr ds : [edx], ecx
        jmp public_6bec7cf
        public_6bec7cc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6bec7cf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x48]
        mov dl, byte ptr ds : [ecx+0x48]
        mov byte ptr ds : [ecx+0x48], bl
        mov byte ptr ds : [esi+0x48], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6bec852
        public_6bec7e7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6bec7f2
        mov dword ptr ds : [ecx], eax
        jmp public_6bec7f5
        public_6bec7f2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6bec7f5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6bec823
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6bec80a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6bec820
        public_6bec80a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        mov edx, eax
        jne public_6bec820
        public_6bec815 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        je public_6bec815
        public_6bec820 : nop
        mov dword ptr ss : [ebp], edx
        public_6bec823 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6bec852
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6bec837
        mov edx, dword ptr ds : [esi+4]
        jmp public_6bec84f
        public_6bec837 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        mov edx, eax
        jne public_6bec84f
        public_6bec843 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        je public_6bec843
        public_6bec84f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6bec852 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x48]
        mov bl, 1
        cmp dl, bl
        jne public_6becaca
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6becac7
        nop 
        public_6bec870 : nop
        cmp byte ptr ds : [eax+0x48], bl
        jne public_6becac7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6bec92f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6bec8db
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6bec8af
        mov dword ptr ds : [esi+4], ecx
        public_6bec8af : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6bec8c2
        mov dword ptr ds : [esi+4], edx
        jmp public_6bec8d0
        public_6bec8c2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6bec8cd
        mov dword ptr ds : [esi], edx
        jmp public_6bec8d0
        public_6bec8cd : nop
        mov dword ptr ds : [esi+8], edx
        public_6bec8d0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6bec8db : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6bec8ee
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        je public_6bec999
        public_6bec8ee : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6bec9cc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x48], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x48], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6bec915
        mov dword ptr ds : [esi+4], ecx
        public_6bec915 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6bec9b1
        mov dword ptr ds : [esi+4], edx
        jmp public_6bec9c0
        public_6bec92f : nop
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6bec982
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6bec955
        mov dword ptr ds : [esi+4], ecx
        public_6bec955 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6bec968
        mov dword ptr ds : [esi+4], edx
        jmp public_6bec977
        public_6bec968 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6bec975
        mov dword ptr ds : [esi+8], edx
        jmp public_6bec977
        public_6bec975 : nop
        mov dword ptr ds : [esi], edx
        public_6bec977 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6bec982 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6beca28
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6beca28
        public_6bec999 : nop
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6bec870
        jmp public_6becac7
        public_6bec9b1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6bec9be
        mov dword ptr ds : [esi+8], edx
        jmp public_6bec9c0
        public_6bec9be : nop
        mov dword ptr ds : [esi], edx
        public_6bec9c0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6bec9cc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x48]
        mov byte ptr ds : [ecx+0x48], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x48], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6bec9f6
        mov dword ptr ds : [esi+4], ecx
        public_6bec9f6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6beca0e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6becac4
        public_6beca0e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6beca1e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6becac4
        public_6beca1e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6becac4
        public_6beca28 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6beca76
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x48], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x48], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6beca4b
        mov dword ptr ds : [esi+4], ecx
        public_6beca4b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6beca5e
        mov dword ptr ds : [esi+4], edx
        jmp public_6beca6c
        public_6beca5e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6beca69
        mov dword ptr ds : [esi], edx
        jmp public_6beca6c
        public_6beca69 : nop
        mov dword ptr ds : [esi+8], edx
        public_6beca6c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6beca76 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x48]
        mov byte ptr ds : [ecx+0x48], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x48], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6beca9f
        mov dword ptr ds : [esi+4], ecx
        public_6beca9f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6becab2
        mov dword ptr ds : [esi+4], edx
        jmp public_6becac1
        public_6becab2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6becabf
        mov dword ptr ds : [esi+8], edx
        jmp public_6becac1
        public_6becabf : nop
        mov dword ptr ds : [esi], edx
        public_6becac1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6becac4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6becac7 : nop
        mov byte ptr ds : [eax+0x48], bl
        public_6becaca : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6c09aaa
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
        UNREACHABLE_TRAP(0x6bec720)
    }
}

#undef public_6bec744
#undef public_6bec762
#undef public_6bec76d
#undef public_6bec776
#undef public_6bec781
#undef public_6bec79d
#undef public_6bec7b4
#undef public_6bec7c1
#undef public_6bec7cc
#undef public_6bec7cf
#undef public_6bec7e7
#undef public_6bec7f2
#undef public_6bec7f5
#undef public_6bec80a
#undef public_6bec815
#undef public_6bec820
#undef public_6bec823
#undef public_6bec837
#undef public_6bec843
#undef public_6bec84f
#undef public_6bec852
#undef public_6bec870
#undef public_6bec8af
#undef public_6bec8c2
#undef public_6bec8cd
#undef public_6bec8d0
#undef public_6bec8db
#undef public_6bec8ee
#undef public_6bec915
#undef public_6bec92f
#undef public_6bec955
#undef public_6bec968
#undef public_6bec975
#undef public_6bec977
#undef public_6bec982
#undef public_6bec999
#undef public_6bec9b1
#undef public_6bec9be
#undef public_6bec9c0
#undef public_6bec9cc
#undef public_6bec9f6
#undef public_6beca0e
#undef public_6beca1e
#undef public_6beca28
#undef public_6beca4b
#undef public_6beca5e
#undef public_6beca69
#undef public_6beca6c
#undef public_6beca76
#undef public_6beca9f
#undef public_6becab2
#undef public_6becabf
#undef public_6becac1
#undef public_6becac4
#undef public_6becac7
#undef public_6becaca
