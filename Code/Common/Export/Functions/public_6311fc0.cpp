#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6311a90);
CLANG_FORWARD_PROC_SYMBOL(public_6311fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6312630);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6311fe4 _public_6311fe4
#define public_6312002 _public_6312002
#define public_631200d _public_631200d
#define public_6312016 _public_6312016
#define public_6312021 _public_6312021
#define public_631203d _public_631203d
#define public_6312054 _public_6312054
#define public_6312061 _public_6312061
#define public_631206c _public_631206c
#define public_631206f _public_631206f
#define public_6312087 _public_6312087
#define public_6312092 _public_6312092
#define public_6312095 _public_6312095
#define public_63120aa _public_63120aa
#define public_63120b5 _public_63120b5
#define public_63120c0 _public_63120c0
#define public_63120c3 _public_63120c3
#define public_63120d7 _public_63120d7
#define public_63120e3 _public_63120e3
#define public_63120ef _public_63120ef
#define public_63120f2 _public_63120f2
#define public_6312110 _public_6312110
#define public_631214f _public_631214f
#define public_6312162 _public_6312162
#define public_631216d _public_631216d
#define public_6312170 _public_6312170
#define public_631217b _public_631217b
#define public_631218e _public_631218e
#define public_63121b5 _public_63121b5
#define public_63121cf _public_63121cf
#define public_63121f5 _public_63121f5
#define public_6312208 _public_6312208
#define public_6312215 _public_6312215
#define public_6312217 _public_6312217
#define public_6312222 _public_6312222
#define public_6312239 _public_6312239
#define public_6312251 _public_6312251
#define public_631225e _public_631225e
#define public_6312260 _public_6312260
#define public_631226c _public_631226c
#define public_6312296 _public_6312296
#define public_63122ae _public_63122ae
#define public_63122be _public_63122be
#define public_63122c8 _public_63122c8
#define public_63122eb _public_63122eb
#define public_63122fe _public_63122fe
#define public_6312309 _public_6312309
#define public_631230c _public_631230c
#define public_6312316 _public_6312316
#define public_631233f _public_631233f
#define public_6312352 _public_6312352
#define public_631235f _public_631235f
#define public_6312361 _public_6312361
#define public_6312364 _public_6312364
#define public_6312367 _public_6312367
#define public_631236e _public_631236e

PROC_DECLARE(0x6311fc0, internal_6311fc0, public_6311fc0);
extern "C" NAKED register_t __cdecl internal_6311fc0()
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
        call public_6312630
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6312002
        mov eax, dword ptr ds : [esi+8]
        public_6311fe4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6312087
        mov dword ptr ds : [ecx+4], eax
        jmp public_6312095
        public_6312002 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_631200d
        mov eax, edx
        jmp public_6311fe4
        public_631200d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_6312021
        public_6312016 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_6312016
        public_6312021 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6311fe4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_631203d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6312054
        public_631203d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6312054 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6312061
        mov dword ptr ds : [edx+4], ecx
        jmp public_631206f
        public_6312061 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_631206c
        mov dword ptr ds : [edx], ecx
        jmp public_631206f
        public_631206c : nop
        mov dword ptr ds : [edx+8], ecx
        public_631206f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x28]
        mov dl, byte ptr ds : [ecx+0x28]
        mov byte ptr ds : [ecx+0x28], bl
        mov byte ptr ds : [esi+0x28], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_63120f2
        public_6312087 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6312092
        mov dword ptr ds : [ecx], eax
        jmp public_6312095
        public_6312092 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6312095 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_63120c3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_63120aa
        mov edx, dword ptr ds : [esi+4]
        jmp public_63120c0
        public_63120aa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_63120c0
        public_63120b5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_63120b5
        public_63120c0 : nop
        mov dword ptr ss : [ebp], edx
        public_63120c3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_63120f2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_63120d7
        mov edx, dword ptr ds : [esi+4]
        jmp public_63120ef
        public_63120d7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_63120ef
        public_63120e3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_63120e3
        public_63120ef : nop
        mov dword ptr ss : [ebp+8], edx
        public_63120f2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x28]
        mov bl, 1
        cmp cl, bl
        jne public_631236e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6312367
        nop 
        public_6312110 : nop
        cmp byte ptr ds : [eax+0x28], bl
        jne public_6312367
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_63121cf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_631217b
        mov byte ptr ds : [ecx+0x28], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_631214f
        mov dword ptr ds : [esi+4], ecx
        public_631214f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6312162
        mov dword ptr ds : [esi+4], edx
        jmp public_6312170
        public_6312162 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_631216d
        mov dword ptr ds : [esi], edx
        jmp public_6312170
        public_631216d : nop
        mov dword ptr ds : [esi+8], edx
        public_6312170 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_631217b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_631218e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        je public_6312239
        public_631218e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_631226c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_63121b5
        mov dword ptr ds : [esi+4], ecx
        public_63121b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6312251
        mov dword ptr ds : [esi+4], edx
        jmp public_6312260
        public_63121cf : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6312222
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_63121f5
        mov dword ptr ds : [esi+4], ecx
        public_63121f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6312208
        mov dword ptr ds : [esi+4], edx
        jmp public_6312217
        public_6312208 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6312215
        mov dword ptr ds : [esi+8], edx
        jmp public_6312217
        public_6312215 : nop
        mov dword ptr ds : [esi], edx
        public_6312217 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6312222 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_63122c8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_63122c8
        public_6312239 : nop
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6312110
        jmp public_6312367
        public_6312251 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_631225e
        mov dword ptr ds : [esi+8], edx
        jmp public_6312260
        public_631225e : nop
        mov dword ptr ds : [esi], edx
        public_6312260 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_631226c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6312296
        mov dword ptr ds : [esi+4], ecx
        public_6312296 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63122ae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6312364
        public_63122ae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_63122be
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6312364
        public_63122be : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6312364
        public_63122c8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6312316
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_63122eb
        mov dword ptr ds : [esi+4], ecx
        public_63122eb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63122fe
        mov dword ptr ds : [esi+4], edx
        jmp public_631230c
        public_63122fe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6312309
        mov dword ptr ds : [esi], edx
        jmp public_631230c
        public_6312309 : nop
        mov dword ptr ds : [esi+8], edx
        public_631230c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6312316 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_631233f
        mov dword ptr ds : [esi+4], ecx
        public_631233f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6312352
        mov dword ptr ds : [esi+4], edx
        jmp public_6312361
        public_6312352 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_631235f
        mov dword ptr ds : [esi+8], edx
        jmp public_6312361
        public_631235f : nop
        mov dword ptr ds : [esi], edx
        public_6312361 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6312364 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6312367 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x28], bl
        public_631236e : nop
        lea ecx, ds:[esi+0xC]
        call public_6311a90
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
        UNREACHABLE_TRAP(0x6311fc0)
    }
}

#undef public_6311fe4
#undef public_6312002
#undef public_631200d
#undef public_6312016
#undef public_6312021
#undef public_631203d
#undef public_6312054
#undef public_6312061
#undef public_631206c
#undef public_631206f
#undef public_6312087
#undef public_6312092
#undef public_6312095
#undef public_63120aa
#undef public_63120b5
#undef public_63120c0
#undef public_63120c3
#undef public_63120d7
#undef public_63120e3
#undef public_63120ef
#undef public_63120f2
#undef public_6312110
#undef public_631214f
#undef public_6312162
#undef public_631216d
#undef public_6312170
#undef public_631217b
#undef public_631218e
#undef public_63121b5
#undef public_63121cf
#undef public_63121f5
#undef public_6312208
#undef public_6312215
#undef public_6312217
#undef public_6312222
#undef public_6312239
#undef public_6312251
#undef public_631225e
#undef public_6312260
#undef public_631226c
#undef public_6312296
#undef public_63122ae
#undef public_63122be
#undef public_63122c8
#undef public_63122eb
#undef public_63122fe
#undef public_6312309
#undef public_631230c
#undef public_6312316
#undef public_631233f
#undef public_6312352
#undef public_631235f
#undef public_6312361
#undef public_6312364
#undef public_6312367
#undef public_631236e
