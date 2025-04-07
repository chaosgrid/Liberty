#include "Common-PCH.h"


#define public_632a9a0 _public_632a9a0
#define public_632a9a4 _public_632a9a4
#define public_632aa2f _public_632aa2f
#define public_632aa7d _public_632aa7d
#define public_632aacf _public_632aacf
#define public_632ab04 _public_632ab04
#define public_632ab23 _public_632ab23
#define public_632ab46 _public_632ab46
#define public_632ab87 _public_632ab87
#define public_632abb4 _public_632abb4
#define public_632abdd _public_632abdd
#define public_632abef _public_632abef
#define public_632ac01 _public_632ac01
#define public_632ac13 _public_632ac13

PROC_DECLARE(0x632a970, internal_632a970, public_632a970);
extern "C" NAKED register_t __cdecl internal_632a970()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push esi
        xor ebx, ebx
        cmp eax, ecx
        push edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_632a9a4
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], ebx
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 0x10
        public_632a9a0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_632a9a4 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        lea ebp, ds:[ebx+ecx]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x50]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [edx+0x68]
        mov ecx, dword ptr ss : [esp+0x18]
        xor edx, edx
        cmp ecx, edx
        je public_632aa2f
        mov edx, dword ptr ss : [esp+0x3C]
        lea eax, ds:[ebx+0x10]
        cmp eax, edx
        ja public_632abdd
        mov dword ptr ss : [ebp], 1
        mov dword ptr ss : [ebp+4], 8
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        mov ebx, eax
        jmp public_632abb4
        public_632aa2f : nop
        cmp edi, edx
        je public_632aa7d
        mov ecx, dword ptr ss : [esp+0x3C]
        lea eax, ds:[ebx+0x11]
        cmp eax, ecx
        ja public_632abef
        mov dword ptr ss : [ebp], 4
        mov dword ptr ss : [ebp+4], 9
        mov bl, byte ptr ds : [edi+5]
        test bl, bl
        mov bl, byte ptr ds : [edi+4]
        sete dl
        dec dl
        and edx, 2
        test bl, bl
        setne cl
        or dl, cl
        mov byte ptr ss : [ebp+8], dl
        fld dword ptr ds : [edi+8]
        fstp dword ptr ss : [ebp+9]
        fld dword ptr ds : [edi+0xC]
        mov ebx, eax
        fstp dword ptr ss : [ebp+0xD]
        jmp public_632abb4
        public_632aa7d : nop
        cmp eax, edx
        je public_632aacf
        mov edx, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+4]
        lea eax, ds:[edx+edx+2]
        mov edx, dword ptr ss : [esp+0x3C]
        lea ecx, ds:[eax+ebx+8]
        cmp ecx, edx
        ja public_632ac01
        lea ecx, ds:[eax-2]
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp], 2
        lea edi, ss:[ebp+8]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+4]
        mov word ptr ds : [eax+ebp+6], 0
        mov ecx, dword ptr ss : [ebp+4]
        lea ebx, ds:[ebx+ecx+8]
        jmp public_632abb4
        public_632aacf : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, edx
        je public_632ab23
        mov ecx, dword ptr ds : [eax+0xC]
        mov edi, dword ptr ss : [esp+0x3C]
        lea ecx, ds:[ecx+ecx+2]
        lea esi, ds:[ecx+ebx+8]
        cmp esi, edi
        ja public_632abdd
        mov dword ptr ss : [ebp], 2
        mov dword ptr ss : [ebp+4], ecx
        mov eax, dword ptr ds : [eax+8]
        cmp eax, edx
        jne public_632ab04
        mov eax, dword ptr ds : [public_639914c]
        public_632ab04 : nop
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        lea edi, ss:[ebp+8]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+4]
        lea ebx, ds:[ebx+eax+8]
        jmp public_632abb4
        public_632ab23 : nop
        cmp dword ptr ss : [esp+0x20], edx
        je public_632ab46
        mov ecx, dword ptr ss : [esp+0x3C]
        lea eax, ds:[ebx+8]
        cmp eax, ecx
        ja public_632abef
        mov dword ptr ss : [ebp], 5
        mov dword ptr ss : [ebp+4], edx
        mov ebx, eax
        jmp public_632abb4
        public_632ab46 : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, edx
        je public_632ab87
        mov edx, dword ptr ss : [esp+0x3C]
        lea ecx, ds:[ebx+0xA]
        cmp ecx, edx
        ja public_632ac01
        xor edx, edx
        mov dx, word ptr ds : [eax+4]
        mov cx, dx
        mov dword ptr ss : [ebp+4], 2
        lea eax, ss:[ebp+8]
        mov dword ptr ss : [ebp], 6
        mov word ptr ds : [eax], cx
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ss : [ebp+4]
        lea ebx, ds:[ebx+edx+8]
        jmp public_632abb4
        public_632ab87 : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, edx
        je public_632abb4
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x2C]
        lea esi, ss:[esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        sub esi, ebx
        push esi
        push ebp
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        test al, al
        je public_632ac13
        add ebx, dword ptr ss : [esp+0x14]
        public_632abb4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_632a9a0
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], ebx
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 0x10
        public_632abdd : nop
        mov edx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ebx
        xor al, al
        pop ebx
        add esp, 0x20
        ret 0x10
        public_632abef : nop
        mov eax, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x20
        ret 0x10
        public_632ac01 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], ebx
        xor al, al
        pop ebx
        add esp, 0x20
        ret 0x10
        public_632ac13 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x40]
        pop edi
        add edx, ebx
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        xor al, al
        pop ebx
        add esp, 0x20
        ret 0x10
        UNREACHABLE_TRAP(0x632a970)
    }
}

#undef public_632a9a0
#undef public_632a9a4
#undef public_632aa2f
#undef public_632aa7d
#undef public_632aacf
#undef public_632ab04
#undef public_632ab23
#undef public_632ab46
#undef public_632ab87
#undef public_632abb4
#undef public_632abdd
#undef public_632abef
#undef public_632ac01
#undef public_632ac13
