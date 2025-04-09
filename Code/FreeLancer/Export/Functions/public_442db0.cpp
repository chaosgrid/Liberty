#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442db0);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_442dd4 _public_442dd4
#define public_442df2 _public_442df2
#define public_442dfd _public_442dfd
#define public_442e06 _public_442e06
#define public_442e11 _public_442e11
#define public_442e2d _public_442e2d
#define public_442e44 _public_442e44
#define public_442e51 _public_442e51
#define public_442e5c _public_442e5c
#define public_442e5f _public_442e5f
#define public_442e77 _public_442e77
#define public_442e82 _public_442e82
#define public_442e85 _public_442e85
#define public_442e9a _public_442e9a
#define public_442ea5 _public_442ea5
#define public_442eb0 _public_442eb0
#define public_442eb3 _public_442eb3
#define public_442ec7 _public_442ec7
#define public_442ed3 _public_442ed3
#define public_442edf _public_442edf
#define public_442ee2 _public_442ee2
#define public_442f00 _public_442f00
#define public_442f3f _public_442f3f
#define public_442f52 _public_442f52
#define public_442f5d _public_442f5d
#define public_442f60 _public_442f60
#define public_442f6b _public_442f6b
#define public_442f7e _public_442f7e
#define public_442fa5 _public_442fa5
#define public_442fbf _public_442fbf
#define public_442fe5 _public_442fe5
#define public_442ff8 _public_442ff8
#define public_443005 _public_443005
#define public_443007 _public_443007
#define public_443012 _public_443012
#define public_443029 _public_443029
#define public_443041 _public_443041
#define public_44304e _public_44304e
#define public_443050 _public_443050
#define public_44305c _public_44305c
#define public_443086 _public_443086
#define public_44309e _public_44309e
#define public_4430ae _public_4430ae
#define public_4430b8 _public_4430b8
#define public_4430db _public_4430db
#define public_4430ee _public_4430ee
#define public_4430f9 _public_4430f9
#define public_4430fc _public_4430fc
#define public_443106 _public_443106
#define public_44312f _public_44312f
#define public_443142 _public_443142
#define public_44314f _public_44314f
#define public_443151 _public_443151
#define public_443154 _public_443154
#define public_443157 _public_443157
#define public_44315e _public_44315e

PROC_DECLARE(0x442db0, internal_442db0, public_442db0);
extern "C" NAKED register_t __cdecl internal_442db0()
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
        call public_5948b0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_442df2
        mov eax, dword ptr ds : [esi+8]
        public_442dd4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_442e77
        mov dword ptr ds : [ecx+4], eax
        jmp public_442e85
        public_442df2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_442dfd
        mov eax, edx
        jmp public_442dd4
        public_442dfd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_442e11
        public_442e06 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_442e06
        public_442e11 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_442dd4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_442e2d
        mov dword ptr ds : [eax+4], ecx
        jmp public_442e44
        public_442e2d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_442e44 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_442e51
        mov dword ptr ds : [edx+4], ecx
        jmp public_442e5f
        public_442e51 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_442e5c
        mov dword ptr ds : [edx], ecx
        jmp public_442e5f
        public_442e5c : nop
        mov dword ptr ds : [edx+8], ecx
        public_442e5f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_442ee2
        public_442e77 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_442e82
        mov dword ptr ds : [ecx], eax
        jmp public_442e85
        public_442e82 : nop
        mov dword ptr ds : [ecx+8], eax
        public_442e85 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_442eb3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_442e9a
        mov edx, dword ptr ds : [esi+4]
        jmp public_442eb0
        public_442e9a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_442eb0
        public_442ea5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_442ea5
        public_442eb0 : nop
        mov dword ptr ss : [ebp], edx
        public_442eb3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_442ee2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_442ec7
        mov edx, dword ptr ds : [esi+4]
        jmp public_442edf
        public_442ec7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_442edf
        public_442ed3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_442ed3
        public_442edf : nop
        mov dword ptr ss : [ebp+8], edx
        public_442ee2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_44315e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_443157
        nop 
        public_442f00 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_443157
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_442fbf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_442f6b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_442f3f
        mov dword ptr ds : [esi+4], ecx
        public_442f3f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_442f52
        mov dword ptr ds : [esi+4], edx
        jmp public_442f60
        public_442f52 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_442f5d
        mov dword ptr ds : [esi], edx
        jmp public_442f60
        public_442f5d : nop
        mov dword ptr ds : [esi+8], edx
        public_442f60 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_442f6b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_442f7e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_443029
        public_442f7e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_44305c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_442fa5
        mov dword ptr ds : [esi+4], ecx
        public_442fa5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_443041
        mov dword ptr ds : [esi+4], edx
        jmp public_443050
        public_442fbf : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_443012
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_442fe5
        mov dword ptr ds : [esi+4], ecx
        public_442fe5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_442ff8
        mov dword ptr ds : [esi+4], edx
        jmp public_443007
        public_442ff8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_443005
        mov dword ptr ds : [esi+8], edx
        jmp public_443007
        public_443005 : nop
        mov dword ptr ds : [esi], edx
        public_443007 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_443012 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_4430b8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_4430b8
        public_443029 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_442f00
        jmp public_443157
        public_443041 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_44304e
        mov dword ptr ds : [esi+8], edx
        jmp public_443050
        public_44304e : nop
        mov dword ptr ds : [esi], edx
        public_443050 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_44305c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_443086
        mov dword ptr ds : [esi+4], ecx
        public_443086 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_44309e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_443154
        public_44309e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4430ae
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_443154
        public_4430ae : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_443154
        public_4430b8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_443106
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4430db
        mov dword ptr ds : [esi+4], ecx
        public_4430db : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4430ee
        mov dword ptr ds : [esi+4], edx
        jmp public_4430fc
        public_4430ee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4430f9
        mov dword ptr ds : [esi], edx
        jmp public_4430fc
        public_4430f9 : nop
        mov dword ptr ds : [esi+8], edx
        public_4430fc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_443106 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_44312f
        mov dword ptr ds : [esi+4], ecx
        public_44312f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_443142
        mov dword ptr ds : [esi+4], edx
        jmp public_443151
        public_443142 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_44314f
        mov dword ptr ds : [esi+8], edx
        jmp public_443151
        public_44314f : nop
        mov dword ptr ds : [esi], edx
        public_443151 : nop
        mov dword ptr ds : [edx+8], ecx
        public_443154 : nop
        mov dword ptr ds : [ecx+4], edx
        public_443157 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_44315e : nop
        lea ecx, ds:[esi+0xC]
        call public_4dd9a0
        push esi
        call public_5b7e1d
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
        UNREACHABLE_TRAP(0x442db0)
    }
}

#undef public_442dd4
#undef public_442df2
#undef public_442dfd
#undef public_442e06
#undef public_442e11
#undef public_442e2d
#undef public_442e44
#undef public_442e51
#undef public_442e5c
#undef public_442e5f
#undef public_442e77
#undef public_442e82
#undef public_442e85
#undef public_442e9a
#undef public_442ea5
#undef public_442eb0
#undef public_442eb3
#undef public_442ec7
#undef public_442ed3
#undef public_442edf
#undef public_442ee2
#undef public_442f00
#undef public_442f3f
#undef public_442f52
#undef public_442f5d
#undef public_442f60
#undef public_442f6b
#undef public_442f7e
#undef public_442fa5
#undef public_442fbf
#undef public_442fe5
#undef public_442ff8
#undef public_443005
#undef public_443007
#undef public_443012
#undef public_443029
#undef public_443041
#undef public_44304e
#undef public_443050
#undef public_44305c
#undef public_443086
#undef public_44309e
#undef public_4430ae
#undef public_4430b8
#undef public_4430db
#undef public_4430ee
#undef public_4430f9
#undef public_4430fc
#undef public_443106
#undef public_44312f
#undef public_443142
#undef public_44314f
#undef public_443151
#undef public_443154
#undef public_443157
#undef public_44315e
