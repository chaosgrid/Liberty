#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626adc0);
CLANG_FORWARD_PROC_SYMBOL(public_626bac0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_626ade4 _public_626ade4
#define public_626ae02 _public_626ae02
#define public_626ae0d _public_626ae0d
#define public_626ae16 _public_626ae16
#define public_626ae21 _public_626ae21
#define public_626ae3d _public_626ae3d
#define public_626ae54 _public_626ae54
#define public_626ae61 _public_626ae61
#define public_626ae6c _public_626ae6c
#define public_626ae6f _public_626ae6f
#define public_626ae87 _public_626ae87
#define public_626ae92 _public_626ae92
#define public_626ae95 _public_626ae95
#define public_626aeaa _public_626aeaa
#define public_626aeb5 _public_626aeb5
#define public_626aec0 _public_626aec0
#define public_626aec3 _public_626aec3
#define public_626aed7 _public_626aed7
#define public_626aee3 _public_626aee3
#define public_626aeef _public_626aeef
#define public_626aef2 _public_626aef2
#define public_626af10 _public_626af10
#define public_626af4f _public_626af4f
#define public_626af62 _public_626af62
#define public_626af6d _public_626af6d
#define public_626af70 _public_626af70
#define public_626af7b _public_626af7b
#define public_626af8e _public_626af8e
#define public_626afb5 _public_626afb5
#define public_626afcf _public_626afcf
#define public_626aff5 _public_626aff5
#define public_626b008 _public_626b008
#define public_626b015 _public_626b015
#define public_626b017 _public_626b017
#define public_626b022 _public_626b022
#define public_626b039 _public_626b039
#define public_626b051 _public_626b051
#define public_626b05e _public_626b05e
#define public_626b060 _public_626b060
#define public_626b06c _public_626b06c
#define public_626b096 _public_626b096
#define public_626b0ae _public_626b0ae
#define public_626b0be _public_626b0be
#define public_626b0c8 _public_626b0c8
#define public_626b0eb _public_626b0eb
#define public_626b0fe _public_626b0fe
#define public_626b109 _public_626b109
#define public_626b10c _public_626b10c
#define public_626b116 _public_626b116
#define public_626b13f _public_626b13f
#define public_626b152 _public_626b152
#define public_626b15f _public_626b15f
#define public_626b161 _public_626b161
#define public_626b164 _public_626b164
#define public_626b167 _public_626b167
#define public_626b16a _public_626b16a

PROC_DECLARE(0x626adc0, internal_626adc0, public_626adc0);
extern "C" NAKED register_t __cdecl internal_626adc0()
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
        call public_626bac0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_626ae02
        mov eax, dword ptr ds : [esi+8]
        public_626ade4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_626ae87
        mov dword ptr ds : [ecx+4], eax
        jmp public_626ae95
        public_626ae02 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_626ae0d
        mov eax, edx
        jmp public_626ade4
        public_626ae0d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_626ae21
        public_626ae16 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_626ae16
        public_626ae21 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_626ade4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_626ae3d
        mov dword ptr ds : [eax+4], ecx
        jmp public_626ae54
        public_626ae3d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_626ae54 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_626ae61
        mov dword ptr ds : [edx+4], ecx
        jmp public_626ae6f
        public_626ae61 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_626ae6c
        mov dword ptr ds : [edx], ecx
        jmp public_626ae6f
        public_626ae6c : nop
        mov dword ptr ds : [edx+8], ecx
        public_626ae6f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x2C]
        mov dl, byte ptr ds : [ecx+0x2C]
        mov byte ptr ds : [ecx+0x2C], bl
        mov byte ptr ds : [esi+0x2C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_626aef2
        public_626ae87 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_626ae92
        mov dword ptr ds : [ecx], eax
        jmp public_626ae95
        public_626ae92 : nop
        mov dword ptr ds : [ecx+8], eax
        public_626ae95 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_626aec3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_626aeaa
        mov edx, dword ptr ds : [esi+4]
        jmp public_626aec0
        public_626aeaa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_626aec0
        public_626aeb5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_626aeb5
        public_626aec0 : nop
        mov dword ptr ss : [ebp], edx
        public_626aec3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_626aef2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_626aed7
        mov edx, dword ptr ds : [esi+4]
        jmp public_626aeef
        public_626aed7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_626aeef
        public_626aee3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_626aee3
        public_626aeef : nop
        mov dword ptr ss : [ebp+8], edx
        public_626aef2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x2C]
        mov bl, 1
        cmp dl, bl
        jne public_626b16a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_626b167
        nop 
        public_626af10 : nop
        cmp byte ptr ds : [eax+0x2C], bl
        jne public_626b167
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_626afcf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_626af7b
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_626af4f
        mov dword ptr ds : [esi+4], ecx
        public_626af4f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_626af62
        mov dword ptr ds : [esi+4], edx
        jmp public_626af70
        public_626af62 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_626af6d
        mov dword ptr ds : [esi], edx
        jmp public_626af70
        public_626af6d : nop
        mov dword ptr ds : [esi+8], edx
        public_626af70 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_626af7b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_626af8e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        je public_626b039
        public_626af8e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_626b06c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_626afb5
        mov dword ptr ds : [esi+4], ecx
        public_626afb5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_626b051
        mov dword ptr ds : [esi+4], edx
        jmp public_626b060
        public_626afcf : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_626b022
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_626aff5
        mov dword ptr ds : [esi+4], ecx
        public_626aff5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_626b008
        mov dword ptr ds : [esi+4], edx
        jmp public_626b017
        public_626b008 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_626b015
        mov dword ptr ds : [esi+8], edx
        jmp public_626b017
        public_626b015 : nop
        mov dword ptr ds : [esi], edx
        public_626b017 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_626b022 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_626b0c8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_626b0c8
        public_626b039 : nop
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_626af10
        jmp public_626b167
        public_626b051 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_626b05e
        mov dword ptr ds : [esi+8], edx
        jmp public_626b060
        public_626b05e : nop
        mov dword ptr ds : [esi], edx
        public_626b060 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_626b06c : nop
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
        je public_626b096
        mov dword ptr ds : [esi+4], ecx
        public_626b096 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_626b0ae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_626b164
        public_626b0ae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_626b0be
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_626b164
        public_626b0be : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_626b164
        public_626b0c8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_626b116
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_626b0eb
        mov dword ptr ds : [esi+4], ecx
        public_626b0eb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_626b0fe
        mov dword ptr ds : [esi+4], edx
        jmp public_626b10c
        public_626b0fe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_626b109
        mov dword ptr ds : [esi], edx
        jmp public_626b10c
        public_626b109 : nop
        mov dword ptr ds : [esi+8], edx
        public_626b10c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_626b116 : nop
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
        je public_626b13f
        mov dword ptr ds : [esi+4], ecx
        public_626b13f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_626b152
        mov dword ptr ds : [esi+4], edx
        jmp public_626b161
        public_626b152 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_626b15f
        mov dword ptr ds : [esi+8], edx
        jmp public_626b161
        public_626b15f : nop
        mov dword ptr ds : [esi], edx
        public_626b161 : nop
        mov dword ptr ds : [edx+8], ecx
        public_626b164 : nop
        mov dword ptr ds : [ecx+4], edx
        public_626b167 : nop
        mov byte ptr ds : [eax+0x2C], bl
        public_626b16a : nop
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
        UNREACHABLE_TRAP(0x626adc0)
    }
}

#undef public_626ade4
#undef public_626ae02
#undef public_626ae0d
#undef public_626ae16
#undef public_626ae21
#undef public_626ae3d
#undef public_626ae54
#undef public_626ae61
#undef public_626ae6c
#undef public_626ae6f
#undef public_626ae87
#undef public_626ae92
#undef public_626ae95
#undef public_626aeaa
#undef public_626aeb5
#undef public_626aec0
#undef public_626aec3
#undef public_626aed7
#undef public_626aee3
#undef public_626aeef
#undef public_626aef2
#undef public_626af10
#undef public_626af4f
#undef public_626af62
#undef public_626af6d
#undef public_626af70
#undef public_626af7b
#undef public_626af8e
#undef public_626afb5
#undef public_626afcf
#undef public_626aff5
#undef public_626b008
#undef public_626b015
#undef public_626b017
#undef public_626b022
#undef public_626b039
#undef public_626b051
#undef public_626b05e
#undef public_626b060
#undef public_626b06c
#undef public_626b096
#undef public_626b0ae
#undef public_626b0be
#undef public_626b0c8
#undef public_626b0eb
#undef public_626b0fe
#undef public_626b109
#undef public_626b10c
#undef public_626b116
#undef public_626b13f
#undef public_626b152
#undef public_626b15f
#undef public_626b161
#undef public_626b164
#undef public_626b167
#undef public_626b16a
