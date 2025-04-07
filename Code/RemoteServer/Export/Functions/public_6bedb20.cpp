#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bed880);
CLANG_FORWARD_PROC_SYMBOL(public_6bedb20);
CLANG_FORWARD_PROC_SYMBOL(public_6bee320);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bedb44 _public_6bedb44
#define public_6bedb62 _public_6bedb62
#define public_6bedb6d _public_6bedb6d
#define public_6bedb76 _public_6bedb76
#define public_6bedb81 _public_6bedb81
#define public_6bedb9d _public_6bedb9d
#define public_6bedbb4 _public_6bedbb4
#define public_6bedbc1 _public_6bedbc1
#define public_6bedbcc _public_6bedbcc
#define public_6bedbcf _public_6bedbcf
#define public_6bedbe7 _public_6bedbe7
#define public_6bedbf2 _public_6bedbf2
#define public_6bedbf5 _public_6bedbf5
#define public_6bedc0a _public_6bedc0a
#define public_6bedc15 _public_6bedc15
#define public_6bedc20 _public_6bedc20
#define public_6bedc23 _public_6bedc23
#define public_6bedc37 _public_6bedc37
#define public_6bedc43 _public_6bedc43
#define public_6bedc4f _public_6bedc4f
#define public_6bedc52 _public_6bedc52
#define public_6bedc70 _public_6bedc70
#define public_6bedcaf _public_6bedcaf
#define public_6bedcc2 _public_6bedcc2
#define public_6bedccd _public_6bedccd
#define public_6bedcd0 _public_6bedcd0
#define public_6bedcdb _public_6bedcdb
#define public_6bedcee _public_6bedcee
#define public_6bedd15 _public_6bedd15
#define public_6bedd2f _public_6bedd2f
#define public_6bedd55 _public_6bedd55
#define public_6bedd68 _public_6bedd68
#define public_6bedd75 _public_6bedd75
#define public_6bedd77 _public_6bedd77
#define public_6bedd82 _public_6bedd82
#define public_6bedd99 _public_6bedd99
#define public_6beddb1 _public_6beddb1
#define public_6beddbe _public_6beddbe
#define public_6beddc0 _public_6beddc0
#define public_6beddcc _public_6beddcc
#define public_6beddf6 _public_6beddf6
#define public_6bede0e _public_6bede0e
#define public_6bede1e _public_6bede1e
#define public_6bede28 _public_6bede28
#define public_6bede4b _public_6bede4b
#define public_6bede5e _public_6bede5e
#define public_6bede69 _public_6bede69
#define public_6bede6c _public_6bede6c
#define public_6bede76 _public_6bede76
#define public_6bede9f _public_6bede9f
#define public_6bedeb2 _public_6bedeb2
#define public_6bedebf _public_6bedebf
#define public_6bedec1 _public_6bedec1
#define public_6bedec4 _public_6bedec4
#define public_6bedec7 _public_6bedec7
#define public_6bedece _public_6bedece

PROC_DECLARE(0x6bedb20, internal_6bedb20, public_6bedb20);
extern "C" NAKED register_t __cdecl internal_6bedb20()
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
        call public_6bee320
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6bedb62
        mov eax, dword ptr ds : [esi+8]
        public_6bedb44 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6bedbe7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6bedbf5
        public_6bedb62 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6bedb6d
        mov eax, edx
        jmp public_6bedb44
        public_6bedb6d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6bedb81
        public_6bedb76 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6bedb76
        public_6bedb81 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6bedb44
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6bedb9d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6bedbb4
        public_6bedb9d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6bedbb4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6bedbc1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6bedbcf
        public_6bedbc1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6bedbcc
        mov dword ptr ds : [edx], ecx
        jmp public_6bedbcf
        public_6bedbcc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6bedbcf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6bedc52
        public_6bedbe7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6bedbf2
        mov dword ptr ds : [ecx], eax
        jmp public_6bedbf5
        public_6bedbf2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6bedbf5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6bedc23
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6bedc0a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6bedc20
        public_6bedc0a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6bedc20
        public_6bedc15 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6bedc15
        public_6bedc20 : nop
        mov dword ptr ss : [ebp], edx
        public_6bedc23 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6bedc52
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6bedc37
        mov edx, dword ptr ds : [esi+4]
        jmp public_6bedc4f
        public_6bedc37 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6bedc4f
        public_6bedc43 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6bedc43
        public_6bedc4f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6bedc52 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_6bedece
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6bedec7
        nop 
        public_6bedc70 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_6bedec7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6bedd2f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6bedcdb
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6bedcaf
        mov dword ptr ds : [esi+4], ecx
        public_6bedcaf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6bedcc2
        mov dword ptr ds : [esi+4], edx
        jmp public_6bedcd0
        public_6bedcc2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6bedccd
        mov dword ptr ds : [esi], edx
        jmp public_6bedcd0
        public_6bedccd : nop
        mov dword ptr ds : [esi+8], edx
        public_6bedcd0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6bedcdb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6bedcee
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_6bedd99
        public_6bedcee : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6beddcc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6bedd15
        mov dword ptr ds : [esi+4], ecx
        public_6bedd15 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6beddb1
        mov dword ptr ds : [esi+4], edx
        jmp public_6beddc0
        public_6bedd2f : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6bedd82
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6bedd55
        mov dword ptr ds : [esi+4], ecx
        public_6bedd55 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6bedd68
        mov dword ptr ds : [esi+4], edx
        jmp public_6bedd77
        public_6bedd68 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6bedd75
        mov dword ptr ds : [esi+8], edx
        jmp public_6bedd77
        public_6bedd75 : nop
        mov dword ptr ds : [esi], edx
        public_6bedd77 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6bedd82 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6bede28
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6bede28
        public_6bedd99 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6bedc70
        jmp public_6bedec7
        public_6beddb1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6beddbe
        mov dword ptr ds : [esi+8], edx
        jmp public_6beddc0
        public_6beddbe : nop
        mov dword ptr ds : [esi], edx
        public_6beddc0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6beddcc : nop
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
        je public_6beddf6
        mov dword ptr ds : [esi+4], ecx
        public_6beddf6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6bede0e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6bedec4
        public_6bede0e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6bede1e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6bedec4
        public_6bede1e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6bedec4
        public_6bede28 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6bede76
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6bede4b
        mov dword ptr ds : [esi+4], ecx
        public_6bede4b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6bede5e
        mov dword ptr ds : [esi+4], edx
        jmp public_6bede6c
        public_6bede5e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6bede69
        mov dword ptr ds : [esi], edx
        jmp public_6bede6c
        public_6bede69 : nop
        mov dword ptr ds : [esi+8], edx
        public_6bede6c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6bede76 : nop
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
        je public_6bede9f
        mov dword ptr ds : [esi+4], ecx
        public_6bede9f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6bedeb2
        mov dword ptr ds : [esi+4], edx
        jmp public_6bedec1
        public_6bedeb2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6bedebf
        mov dword ptr ds : [esi+8], edx
        jmp public_6bedec1
        public_6bedebf : nop
        mov dword ptr ds : [esi], edx
        public_6bedec1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6bedec4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6bedec7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_6bedece : nop
        lea ecx, ds:[esi+0xC]
        call public_6bed880
        push esi
        call public_6c09aaa
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
        UNREACHABLE_TRAP(0x6bedb20)
    }
}

#undef public_6bedb44
#undef public_6bedb62
#undef public_6bedb6d
#undef public_6bedb76
#undef public_6bedb81
#undef public_6bedb9d
#undef public_6bedbb4
#undef public_6bedbc1
#undef public_6bedbcc
#undef public_6bedbcf
#undef public_6bedbe7
#undef public_6bedbf2
#undef public_6bedbf5
#undef public_6bedc0a
#undef public_6bedc15
#undef public_6bedc20
#undef public_6bedc23
#undef public_6bedc37
#undef public_6bedc43
#undef public_6bedc4f
#undef public_6bedc52
#undef public_6bedc70
#undef public_6bedcaf
#undef public_6bedcc2
#undef public_6bedccd
#undef public_6bedcd0
#undef public_6bedcdb
#undef public_6bedcee
#undef public_6bedd15
#undef public_6bedd2f
#undef public_6bedd55
#undef public_6bedd68
#undef public_6bedd75
#undef public_6bedd77
#undef public_6bedd82
#undef public_6bedd99
#undef public_6beddb1
#undef public_6beddbe
#undef public_6beddc0
#undef public_6beddcc
#undef public_6beddf6
#undef public_6bede0e
#undef public_6bede1e
#undef public_6bede28
#undef public_6bede4b
#undef public_6bede5e
#undef public_6bede69
#undef public_6bede6c
#undef public_6bede76
#undef public_6bede9f
#undef public_6bedeb2
#undef public_6bedebf
#undef public_6bedec1
#undef public_6bedec4
#undef public_6bedec7
#undef public_6bedece
