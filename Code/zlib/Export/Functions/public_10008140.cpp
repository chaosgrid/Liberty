#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006960);
CLANG_FORWARD_PROC_SYMBOL(public_100072a0);
CLANG_FORWARD_PROC_SYMBOL(public_10007510);
CLANG_FORWARD_PROC_SYMBOL(public_10007930);
CLANG_FORWARD_PROC_SYMBOL(public_10007a60);
CLANG_FORWARD_PROC_SYMBOL(public_10007c30);
CLANG_FORWARD_PROC_SYMBOL(public_10007e30);
CLANG_FORWARD_PROC_SYMBOL(public_10007ea0);
CLANG_FORWARD_PROC_SYMBOL(public_10008140);

#define public_10008162 _public_10008162
#define public_100081a2 _public_100081a2
#define public_100081a5 _public_100081a5
#define public_100081a7 _public_100081a7
#define public_100081cb _public_100081cb
#define public_1000823a _public_1000823a
#define public_1000824c _public_1000824c
#define public_10008265 _public_10008265
#define public_100082c8 _public_100082c8
#define public_100082da _public_100082da
#define public_1000830b _public_1000830b
#define public_10008321 _public_10008321

PROC_DECLARE(0x10008140, internal_10008140, public_10008140);
extern "C" NAKED register_t __cdecl internal_10008140()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x7C]
        xor eax, eax
        test ecx, ecx
        push edi
        jle public_100081a2
        cmp byte ptr ds : [esi+0x1C], 2
        jne public_10008162
        mov ecx, esi
        call public_10007930
        public_10008162 : nop
        lea eax, ds:[esi+0xB10]
        push eax
        call public_10007c30
        lea ecx, ds:[esi+0xB1C]
        push ecx
        call public_10007c30
        add esp, 8
        mov eax, esi
        call public_10007e30
        mov edx, dword ptr ds : [esi+0x16A0]
        mov ecx, dword ptr ds : [esi+0x16A4]
        add edx, 0xA
        add ecx, 0xA
        shr edx, 3
        shr ecx, 3
        cmp ecx, edx
        ja public_100081a7
        jmp public_100081a5
        public_100081a2 : nop
        lea ecx, ss:[ebp+5]
        public_100081a5 : nop
        mov edx, ecx
        public_100081a7 : nop
        lea edi, ss:[ebp+4]
        cmp edi, edx
        ja public_100081cb
        mov ebx, dword ptr ss : [esp+0x18]
        test ebx, ebx
        je public_100081cb
        mov edi, dword ptr ss : [esp+0x20]
        push edi
        push ebp
        push ebx
        push esi
        call public_10007ea0
        add esp, 0x10
        jmp public_1000830b
        public_100081cb : nop
        mov edi, dword ptr ss : [esp+0x20]
        cmp ecx, edx
        mov ecx, dword ptr ds : [esi+0x16B4]
        jne public_10008265
        cmp ecx, 0xD
        lea eax, ds:[edi+2]
        jle public_1000823a
        mov edx, eax
        shl edx, cl
        mov ecx, dword ptr ds : [esi+8]
        or word ptr ds : [esi+0x16B0], dx
        mov edx, dword ptr ds : [esi+0x14]
        mov bl, byte ptr ds : [esi+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [esi+0x14]
        mov bl, byte ptr ds : [esi+0x16B1]
        inc edx
        mov dword ptr ds : [esi+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [esi+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x16B4]
        inc ecx
        mov dword ptr ds : [esi+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr ax, cl
        add edx, 0xFFFFFFF3
        mov dword ptr ds : [esi+0x16B4], edx
        mov word ptr ds : [esi+0x16B0], ax
        jmp public_1000824c
        public_1000823a : nop
        shl eax, cl
        or word ptr ds : [esi+0x16B0], ax
        add ecx, 3
        mov dword ptr ds : [esi+0x16B4], ecx
/*FIXUP public_1000824c : nop
        push offset public_1000bbb0 @0x1000824c*/
  FIXUP public_1000824c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000bbb0
/*FIXUP push offset public_1000b730 @0x10008251*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b730
        mov eax, esi
        call public_10007510
        add esp, 8
        jmp public_1000830b
        public_10008265 : nop
        cmp ecx, 0xD
        lea edx, ds:[edi+4]
        jle public_100082c8
        mov ebx, edx
        shl ebx, cl
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x20], eax
        or word ptr ds : [esi+0x16B0], bx
        mov ebx, dword ptr ds : [esi+0x14]
        mov al, byte ptr ds : [esi+0x16B0]
        mov byte ptr ds : [ecx+ebx], al
        mov ecx, dword ptr ds : [esi+0x14]
        mov al, byte ptr ds : [esi+0x16B1]
        mov ebx, dword ptr ds : [esi+8]
        inc ecx
        mov dword ptr ds : [esi+0x14], ecx
        mov byte ptr ds : [ecx+ebx], al
        mov ebx, dword ptr ds : [esi+0x16B4]
        mov eax, dword ptr ds : [esi+0x14]
        mov cl, 0x10
        sub cl, bl
        shr dx, cl
        inc eax
        add ebx, 0xFFFFFFF3
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov word ptr ds : [esi+0x16B0], dx
        mov dword ptr ds : [esi+0x16B4], ebx
        jmp public_100082da
        public_100082c8 : nop
        shl edx, cl
        or word ptr ds : [esi+0x16B0], dx
        add ecx, 3
        mov dword ptr ds : [esi+0x16B4], ecx
        public_100082da : nop
        mov ecx, dword ptr ds : [esi+0xB14]
        inc eax
        push eax
        mov eax, dword ptr ds : [esi+0xB20]
        inc eax
        push eax
        inc ecx
        push ecx
        mov eax, esi
        call public_100072a0
        lea edx, ds:[esi+0x980]
        push edx
        lea eax, ds:[esi+0x8C]
        push eax
        mov eax, esi
        call public_10007510
        add esp, 0x14
        public_1000830b : nop
        mov edx, esi
        call public_10006960
        test edi, edi
        pop edi
        je public_10008321
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        jmp public_10007a60
        public_10008321 : nop
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x10008140)
    }
}

#undef public_10008162
#undef public_100081a2
#undef public_100081a5
#undef public_100081a7
#undef public_100081cb
#undef public_1000823a
#undef public_1000824c
#undef public_10008265
#undef public_100082c8
#undef public_100082da
#undef public_1000830b
#undef public_10008321
