#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434f20);
CLANG_FORWARD_PROC_SYMBOL(public_435100);
CLANG_FORWARD_PROC_SYMBOL(public_436030);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9148);

#define public_435149 _public_435149
#define public_435151 _public_435151
#define public_435160 _public_435160
#define public_435170 _public_435170
#define public_43517d _public_43517d
#define public_435180 _public_435180
#define public_4351a0 _public_4351a0
#define public_4351a4 _public_4351a4
#define public_4351a9 _public_4351a9
#define public_4351b5 _public_4351b5
#define public_4351c0 _public_4351c0
#define public_4351c4 _public_4351c4
#define public_435225 _public_435225
#define public_435298 _public_435298
#define public_4352b9 _public_4352b9
#define public_4352dc _public_4352dc
#define public_4352e5 _public_4352e5
#define public_4352f1 _public_4352f1
#define public_43530b _public_43530b

PROC_DECLARE(0x435100, internal_435100, public_435100);
extern "C" NAKED register_t __cdecl internal_435100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9148 @0x435102*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9148
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+8], esi
        call dword ptr ds : [ecx+0x74]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [esi+0x2C], eax
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0xC], ecx
        je public_43530b
        push ebx
        push ebp
        push edi
        jmp public_435151
        public_435149 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x10]
        public_435151 : nop
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        mov ebx, dword ptr ds : [public_5c7078]
        je public_435160
        mov ebx, eax
        public_435160 : nop
        mov ebp, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_4351c4
        lea ebx, ds:[ebx]
        public_435170 : nop
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        jne public_43517d
        mov esi, dword ptr ds : [public_5c7078]
        public_43517d : nop
        mov eax, ebx
        nop 
        public_435180 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_4351a4
        test cl, cl
        je public_4351a0
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_4351a4
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_435180
        public_4351a0 : nop
        xor eax, eax
        jmp public_4351a9
        public_4351a4 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_4351a9 : nop
        test eax, eax
        je public_4351b5
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_435170
        jmp public_4351c0
        public_4351b5 : nop
        lea eax, ds:[edi+8]
        test eax, eax
        jne public_4352f1
        public_4351c0 : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_4351c4 : nop
        mov al, byte ptr ss : [esp+0x48]
        push 0
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x2C], al
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x48], 0
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_435225
        mov edi, dword ptr ss : [esp+0x2C]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        mov esi, ebx
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x30], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_435225 : nop
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_436030
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+4]
        xor edi, edi
        lea esi, ds:[eax+8]
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        push ebx
        mov dword ptr ss : [esp+0x20], edi
        call dword ptr ds : [public_5c607c]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        cmp ecx, edi
        je public_435298
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_5c6d40]
        mov dword ptr ss : [esp+0x24], esi
        lea esi, ss:[esp+0x20]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset _public_434f20 @0x43527c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_434f20
        push eax
        call dword ptr ds : [edx+0x80]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_5c6074]
        add esp, 4
        jmp public_4352b9
        public_435298 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0x149
/*FIXUP push offset public_5caddc @0x4352a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caddc
        mov eax, 0x100002
/*FIXUP push offset public_5cadb0 @0x4352ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cadb0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4352b9 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        je public_4352e5
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4352dc
        cmp cl, 0xFF
        je public_4352dc
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4352e5
        public_4352dc : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4352e5 : nop
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edi
        public_4352f1 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x48]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        jne public_435149
        pop edi
        pop ebp
        pop ebx
        public_43530b : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x435100)
    }
}

#undef public_435149
#undef public_435151
#undef public_435160
#undef public_435170
#undef public_43517d
#undef public_435180
#undef public_4351a0
#undef public_4351a4
#undef public_4351a9
#undef public_4351b5
#undef public_4351c0
#undef public_4351c4
#undef public_435225
#undef public_435298
#undef public_4352b9
#undef public_4352dc
#undef public_4352e5
#undef public_4352f1
#undef public_43530b
