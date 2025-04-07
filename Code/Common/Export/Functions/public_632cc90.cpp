#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b110);
CLANG_FORWARD_PROC_SYMBOL(public_632c340);
CLANG_FORWARD_PROC_SYMBOL(public_632cc90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632ccb4 _public_632ccb4
#define public_632ccd2 _public_632ccd2
#define public_632ccdd _public_632ccdd
#define public_632cce6 _public_632cce6
#define public_632ccf1 _public_632ccf1
#define public_632cd0d _public_632cd0d
#define public_632cd24 _public_632cd24
#define public_632cd31 _public_632cd31
#define public_632cd3c _public_632cd3c
#define public_632cd3f _public_632cd3f
#define public_632cd57 _public_632cd57
#define public_632cd62 _public_632cd62
#define public_632cd65 _public_632cd65
#define public_632cd7a _public_632cd7a
#define public_632cd85 _public_632cd85
#define public_632cd90 _public_632cd90
#define public_632cd93 _public_632cd93
#define public_632cda7 _public_632cda7
#define public_632cdb3 _public_632cdb3
#define public_632cdbf _public_632cdbf
#define public_632cdc2 _public_632cdc2
#define public_632cde0 _public_632cde0
#define public_632ce1f _public_632ce1f
#define public_632ce32 _public_632ce32
#define public_632ce3d _public_632ce3d
#define public_632ce40 _public_632ce40
#define public_632ce4b _public_632ce4b
#define public_632ce5e _public_632ce5e
#define public_632ce85 _public_632ce85
#define public_632ce9f _public_632ce9f
#define public_632cec5 _public_632cec5
#define public_632ced8 _public_632ced8
#define public_632cee5 _public_632cee5
#define public_632cee7 _public_632cee7
#define public_632cef2 _public_632cef2
#define public_632cf09 _public_632cf09
#define public_632cf21 _public_632cf21
#define public_632cf2e _public_632cf2e
#define public_632cf30 _public_632cf30
#define public_632cf3c _public_632cf3c
#define public_632cf66 _public_632cf66
#define public_632cf7e _public_632cf7e
#define public_632cf8e _public_632cf8e
#define public_632cf98 _public_632cf98
#define public_632cfbb _public_632cfbb
#define public_632cfce _public_632cfce
#define public_632cfd9 _public_632cfd9
#define public_632cfdc _public_632cfdc
#define public_632cfe6 _public_632cfe6
#define public_632d00f _public_632d00f
#define public_632d022 _public_632d022
#define public_632d02f _public_632d02f
#define public_632d031 _public_632d031
#define public_632d034 _public_632d034
#define public_632d037 _public_632d037
#define public_632d03e _public_632d03e

PROC_DECLARE(0x632cc90, internal_632cc90, public_632cc90);
extern "C" NAKED register_t __cdecl internal_632cc90()
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
        jne public_632ccd2
        mov eax, dword ptr ds : [esi+8]
        public_632ccb4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_632cd57
        mov dword ptr ds : [ecx+4], eax
        jmp public_632cd65
        public_632ccd2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_632ccdd
        mov eax, edx
        jmp public_632ccb4
        public_632ccdd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_632ccf1
        public_632cce6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_632cce6
        public_632ccf1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_632ccb4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_632cd0d
        mov dword ptr ds : [eax+4], ecx
        jmp public_632cd24
        public_632cd0d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_632cd24 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_632cd31
        mov dword ptr ds : [edx+4], ecx
        jmp public_632cd3f
        public_632cd31 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_632cd3c
        mov dword ptr ds : [edx], ecx
        jmp public_632cd3f
        public_632cd3c : nop
        mov dword ptr ds : [edx+8], ecx
        public_632cd3f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x1C]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov byte ptr ds : [ecx+0x1C], bl
        mov byte ptr ds : [esi+0x1C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_632cdc2
        public_632cd57 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_632cd62
        mov dword ptr ds : [ecx], eax
        jmp public_632cd65
        public_632cd62 : nop
        mov dword ptr ds : [ecx+8], eax
        public_632cd65 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_632cd93
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_632cd7a
        mov edx, dword ptr ds : [esi+4]
        jmp public_632cd90
        public_632cd7a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_632cd90
        public_632cd85 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_632cd85
        public_632cd90 : nop
        mov dword ptr ss : [ebp], edx
        public_632cd93 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_632cdc2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_632cda7
        mov edx, dword ptr ds : [esi+4]
        jmp public_632cdbf
        public_632cda7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_632cdbf
        public_632cdb3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_632cdb3
        public_632cdbf : nop
        mov dword ptr ss : [ebp+8], edx
        public_632cdc2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x1C]
        mov bl, 1
        cmp cl, bl
        jne public_632d03e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_632d037
        nop 
        public_632cde0 : nop
        cmp byte ptr ds : [eax+0x1C], bl
        jne public_632d037
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_632ce9f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_632ce4b
        mov byte ptr ds : [ecx+0x1C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_632ce1f
        mov dword ptr ds : [esi+4], ecx
        public_632ce1f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_632ce32
        mov dword ptr ds : [esi+4], edx
        jmp public_632ce40
        public_632ce32 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_632ce3d
        mov dword ptr ds : [esi], edx
        jmp public_632ce40
        public_632ce3d : nop
        mov dword ptr ds : [esi+8], edx
        public_632ce40 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_632ce4b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_632ce5e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        je public_632cf09
        public_632ce5e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_632cf3c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_632ce85
        mov dword ptr ds : [esi+4], ecx
        public_632ce85 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_632cf21
        mov dword ptr ds : [esi+4], edx
        jmp public_632cf30
        public_632ce9f : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_632cef2
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_632cec5
        mov dword ptr ds : [esi+4], ecx
        public_632cec5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_632ced8
        mov dword ptr ds : [esi+4], edx
        jmp public_632cee7
        public_632ced8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_632cee5
        mov dword ptr ds : [esi+8], edx
        jmp public_632cee7
        public_632cee5 : nop
        mov dword ptr ds : [esi], edx
        public_632cee7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_632cef2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_632cf98
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_632cf98
        public_632cf09 : nop
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_632cde0
        jmp public_632d037
        public_632cf21 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_632cf2e
        mov dword ptr ds : [esi+8], edx
        jmp public_632cf30
        public_632cf2e : nop
        mov dword ptr ds : [esi], edx
        public_632cf30 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_632cf3c : nop
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
        je public_632cf66
        mov dword ptr ds : [esi+4], ecx
        public_632cf66 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_632cf7e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_632d034
        public_632cf7e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_632cf8e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_632d034
        public_632cf8e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_632d034
        public_632cf98 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_632cfe6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_632cfbb
        mov dword ptr ds : [esi+4], ecx
        public_632cfbb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_632cfce
        mov dword ptr ds : [esi+4], edx
        jmp public_632cfdc
        public_632cfce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_632cfd9
        mov dword ptr ds : [esi], edx
        jmp public_632cfdc
        public_632cfd9 : nop
        mov dword ptr ds : [esi+8], edx
        public_632cfdc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_632cfe6 : nop
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
        je public_632d00f
        mov dword ptr ds : [esi+4], ecx
        public_632d00f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_632d022
        mov dword ptr ds : [esi+4], edx
        jmp public_632d031
        public_632d022 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_632d02f
        mov dword ptr ds : [esi+8], edx
        jmp public_632d031
        public_632d02f : nop
        mov dword ptr ds : [esi], edx
        public_632d031 : nop
        mov dword ptr ds : [edx+8], ecx
        public_632d034 : nop
        mov dword ptr ds : [ecx+4], edx
        public_632d037 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x1C], bl
        public_632d03e : nop
        lea ecx, ds:[esi+0xC]
        call public_632c340
        push esi
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x632cc90)
    }
}

#undef public_632ccb4
#undef public_632ccd2
#undef public_632ccdd
#undef public_632cce6
#undef public_632ccf1
#undef public_632cd0d
#undef public_632cd24
#undef public_632cd31
#undef public_632cd3c
#undef public_632cd3f
#undef public_632cd57
#undef public_632cd62
#undef public_632cd65
#undef public_632cd7a
#undef public_632cd85
#undef public_632cd90
#undef public_632cd93
#undef public_632cda7
#undef public_632cdb3
#undef public_632cdbf
#undef public_632cdc2
#undef public_632cde0
#undef public_632ce1f
#undef public_632ce32
#undef public_632ce3d
#undef public_632ce40
#undef public_632ce4b
#undef public_632ce5e
#undef public_632ce85
#undef public_632ce9f
#undef public_632cec5
#undef public_632ced8
#undef public_632cee5
#undef public_632cee7
#undef public_632cef2
#undef public_632cf09
#undef public_632cf21
#undef public_632cf2e
#undef public_632cf30
#undef public_632cf3c
#undef public_632cf66
#undef public_632cf7e
#undef public_632cf8e
#undef public_632cf98
#undef public_632cfbb
#undef public_632cfce
#undef public_632cfd9
#undef public_632cfdc
#undef public_632cfe6
#undef public_632d00f
#undef public_632d022
#undef public_632d02f
#undef public_632d031
#undef public_632d034
#undef public_632d037
#undef public_632d03e
