#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4b5150);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_503330);
CLANG_FORWARD_PROC_SYMBOL(public_514010);
CLANG_FORWARD_PROC_SYMBOL(public_514070);
CLANG_FORWARD_PROC_SYMBOL(public_5140c0);
CLANG_FORWARD_PROC_SYMBOL(public_514bf0);
CLANG_FORWARD_PROC_SYMBOL(public_515640);
CLANG_FORWARD_PROC_SYMBOL(public_515dd0);
CLANG_FORWARD_PROC_SYMBOL(public_515e20);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_515e48 _public_515e48
#define public_515e54 _public_515e54
#define public_515e85 _public_515e85
#define public_515e8c _public_515e8c
#define public_515ebe _public_515ebe
#define public_515ec0 _public_515ec0
#define public_515eeb _public_515eeb
#define public_515f05 _public_515f05
#define public_515f19 _public_515f19
#define public_515f1b _public_515f1b
#define public_515fa2 _public_515fa2
#define public_515fcb _public_515fcb
#define public_515fd7 _public_515fd7
#define public_515fde _public_515fde
#define public_515ff9 _public_515ff9
#define public_516013 _public_516013

PROC_DECLARE(0x515e20, internal_515e20, public_515e20);
extern "C" NAKED register_t __cdecl internal_515e20()
{
    __asm
    {
        sub esp, 0x50
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x5C]
        push edi
        mov edi, dword ptr ds : [esi+0x160]
        test edi, edi
        mov dword ptr ss : [esp+0xC], edi
        je public_515e85
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [ecx]
        cmp ecx, ebp
        je public_515e54
        public_515e48 : nop
        cmp dword ptr ss : [ebp+8], eax
        je public_515e8c
        mov ebp, dword ptr ss : [ebp]
        cmp ecx, ebp
        jne public_515e48
        public_515e54 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x68]
        call public_411c50
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5db7c8 @0x515e6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7c8
        push 0x367
/*FIXUP push offset public_5db798 @0x515e75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db798
/*FIXUP push offset public_5c862c @0x515e7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_515e85 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 
        public_515e8c : nop
        mov al, byte ptr ds : [esi+0x184]
        test al, al
        jns public_515fde
        test byte ptr ds : [esi+0x185], 4
        jne public_515fde
        push ebx
        call public_54baf0
        cmp esi, eax
        mov eax, dword ptr ds : [edi+0x14]
        sete bl
        test eax, eax
        je public_515ebe
        add eax, 0xFFFFFFF8
        jmp public_515ec0
        public_515ebe : nop
        xor eax, eax
        public_515ec0 : nop
        push eax
        call public_5140c0
        add esp, 4
        test bl, bl
        mov dword ptr ss : [esp+0x64], eax
        pop ebx
        je public_515eeb
        mov al, byte ptr ds : [esi+0x184]
        and al, 0xBF
        lea ecx, ds:[esi+0x174]
        mov byte ptr ds : [esi+0x184], al
        call public_515640
        public_515eeb : nop
        lea edi, ds:[esi+0x164]
        mov ecx, edi
        call public_503330
        test al, al
        je public_515f05
        push edi
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        public_515f05 : nop
        mov eax, dword ptr ds : [esi+0x160]
        add eax, 0x14
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_515f19
        add eax, 0xFFFFFFF8
        jmp public_515f1b
        public_515f19 : nop
        xor eax, eax
        public_515f1b : nop
        mov cl, byte ptr ds : [eax+0x1F0]
        test cl, cl
        jne public_515fcb
        call public_54baf0
        cmp esi, eax
        jne public_515fa2
        mov ecx, dword ptr ss : [esp+0x60]
        lea edi, ds:[ecx+0x64]
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_515fa2
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x60]
        fchs 
        lea edx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        call public_514010
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x24]
        call public_422b80
        push eax
        lea eax, ss:[esp+0x34]
        push eax
        push edi
        mov ecx, offset public_674c5c
        call public_515dd0
        jmp public_515fd7
        public_515fa2 : nop
        push 0
        lea ecx, ss:[esp+0x30]
        call public_4b5150
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x6C]
        push esi
        add eax, 0x78
        push eax
        mov ecx, offset public_674c60
        call public_514070
        jmp public_515fd7
        public_515fcb : nop
        mov ecx, dword ptr ss : [esp+0xC]
        push 0
        push esi
        call public_514bf0
        public_515fd7 : nop
        or byte ptr ds : [esi+0x185], 5
        public_515fde : nop
        call public_54baf0
        cmp esi, eax
        jne public_515ff9
        lea ecx, ds:[esi+0x174]
        call public_515640
        and byte ptr ds : [esi+0x184], 0xBF
        public_515ff9 : nop
        lea edi, ds:[esi+0x164]
        mov ecx, edi
        call public_503330
        test al, al
        je public_516013
        push edi
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        public_516013 : nop
        xor eax, eax
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x68]
        mov dword ptr ds : [esi+0x184], eax
        mov dword ptr ds : [esi+0x160], eax
        mov dword ptr ss : [esp+0x68], ebp
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x10]
        add esp, 4
        pop edi
        dec ecx
        pop esi
        mov dword ptr ds : [eax+0x10], ecx
        pop ebp
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x515e20)
    }
}

#undef public_515e48
#undef public_515e54
#undef public_515e85
#undef public_515e8c
#undef public_515ebe
#undef public_515ec0
#undef public_515eeb
#undef public_515f05
#undef public_515f19
#undef public_515f1b
#undef public_515fa2
#undef public_515fcb
#undef public_515fd7
#undef public_515fde
#undef public_515ff9
#undef public_516013
