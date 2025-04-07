#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60639);

#define public_6cec986 _public_6cec986
#define public_6cec988 _public_6cec988
#define public_6cec9a1 _public_6cec9a1
#define public_6cec9ab _public_6cec9ab
#define public_6cec9ba _public_6cec9ba
#define public_6cec9bc _public_6cec9bc
#define public_6cec9f8 _public_6cec9f8
#define public_6ceca34 _public_6ceca34
#define public_6ceca90 _public_6ceca90
#define public_6cecaa6 _public_6cecaa6
#define public_6cecab0 _public_6cecab0
#define public_6cecabe _public_6cecabe
#define public_6cecac4 _public_6cecac4
#define public_6cecad7 _public_6cecad7
#define public_6cecaf0 _public_6cecaf0
#define public_6cecaf4 _public_6cecaf4
#define public_6cecb00 _public_6cecb00
#define public_6cecb2d _public_6cecb2d

PROC_DECLARE(0x6cec910, internal_6cec910, public_6cec910);
extern "C" NAKED register_t __cdecl internal_6cec910()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60639 @0x6cec912*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60639
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        mov al, byte ptr ss : [esp+0x48]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        mov esi, ecx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x20], esi
        mov byte ptr ss : [esp+0x34], al
        call dword ptr ds : [public_6d641fc]
        mov edi, eax
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x3C], 0x14
        je public_6cec986
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_6cec986
        mov ebp, ecx
        jmp public_6cec988
        public_6cec986 : nop
        xor ebp, ebp
        public_6cec988 : nop
        cmp ebp, ebx
        mov al, 1
        je public_6cec9a1
        mov edx, dword ptr ss : [ebp+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_6cec9a1
        xor al, al
        public_6cec9a1 : nop
        cmp dword ptr ss : [ebp+0x100], ebx
        jg public_6cec9ab
        xor al, al
        public_6cec9ab : nop
        cmp ecx, ebx
        je public_6cec9ba
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cec9bc
        public_6cec9ba : nop
        xor ecx, ecx
        public_6cec9bc : nop
        mov ecx, dword ptr ds : [ecx+0xB4]
        cmp ecx, ebx
        jbe public_6cec9f8
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6cec9f8
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        cmp dword ptr ds : [edx+esi+0x348], ebx
        je public_6cec9f8
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+esi-0x4C], ebx
        jne public_6cecaf4
        public_6cec9f8 : nop
        test al, al
        je public_6cecaf4
        push 0x10000
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d64204]
        mov ebx, dword ptr ds : [public_6d64200]
        lea eax, ss:[esp+0x1C]
        lea edi, ss:[ebp+0xE4]
        push eax
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        je public_6cecad7
        mov ebp, dword ptr ds : [public_6d641ec]
        public_6ceca34 : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jbe public_6cecac4
        mov ecx, esi
        call dword ptr ds : [public_6d64328]
        fmul dword ptr ss : [esp+0x58]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cecac4
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        fsub dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cecaa6
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x3C]
        fsub dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jp public_6cecab0
        public_6ceca90 : nop
        cmp dword ptr ds : [esi+0x28], 1
        jne public_6cecab0
        mov ecx, dword ptr ss : [esp+0x14]
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        push 1
        push ecx
        push edx
        jmp public_6cecabe
        public_6cecaa6 : nop
        mov dword ptr ss : [esp+0x14], 0
        jmp public_6ceca90
        public_6cecab0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push 0
        push eax
        push ecx
        public_6cecabe : nop
        lea ecx, ss:[esp+0x38]
        call ebp
        public_6cecac4 : nop
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6ceca34
        public_6cecad7 : nop
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        je public_6cecaf0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x2C]
        push edx
        call dword ptr ds : [eax+0x188]
        public_6cecaf0 : nop
        mov edi, dword ptr ss : [esp+0x30]
        public_6cecaf4 : nop
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6cecb2d
        lea ebx, ds:[ebx]
        public_6cecb00 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x34], ecx
        jne public_6cecb00
        mov edi, dword ptr ss : [esp+0x30]
        public_6cecb2d : nop
        push edi
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6cec910)
    }
}

#undef public_6cec986
#undef public_6cec988
#undef public_6cec9a1
#undef public_6cec9ab
#undef public_6cec9ba
#undef public_6cec9bc
#undef public_6cec9f8
#undef public_6ceca34
#undef public_6ceca90
#undef public_6cecaa6
#undef public_6cecab0
#undef public_6cecabe
#undef public_6cecac4
#undef public_6cecad7
#undef public_6cecaf0
#undef public_6cecaf4
#undef public_6cecb00
#undef public_6cecb2d
