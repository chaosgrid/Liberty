#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220c60);
CLANG_FORWARD_PROC_SYMBOL(public_6220ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6222e00);
CLANG_FORWARD_PROC_SYMBOL(public_6222ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6222ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6222f80);
CLANG_FORWARD_JUMP_SYMBOL(public_6248b80);

#define public_62201cf _public_62201cf
#define public_6220253 _public_6220253
#define public_6220276 _public_6220276
#define public_622029b _public_622029b
#define public_62202be _public_62202be
#define public_62202cf _public_62202cf

PROC_DECLARE(0x6220140, internal_6220140, public_6220140);
extern "C" NAKED register_t __cdecl internal_6220140()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248b80 @0x6220142*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248b80
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x54]
        push esi
        push edi
        xor edi, edi
        mov eax, dword ptr ss : [ebp]
        push edi
/*FIXUP push offset public_625617c @0x6220166*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625617c
        push ebp
        call dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ss : [ebp]
/*FIXUP push offset public_625617c @0x6220172*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625617c
        push ebp
        call dword ptr ds : [ecx+0x60]
        push 1
/*FIXUP push offset public_625617c @0x622017d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625617c
        push ebp
        lea ecx, ss:[esp+0x24]
        call public_6222e00
        lea edx, ss:[esp+0x14]
        push 4
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x1C], 0x3F8CCCCD
        call public_6222ee0
        push 4
        lea ecx, ss:[esp+0x1C]
        mov esi, dword ptr ss : [esp+0x5C]
        lea eax, ds:[esi+0x20]
        push eax
        call public_6222ee0
        lea ecx, ss:[esp+0x10]
        lea ebx, ds:[esi+0x18]
        push ecx
        mov ecx, ebx
        call public_6220c60
        mov byte ptr ss : [esp+0x50], 1
        public_62201cf : nop
        lea edx, ss:[esp+0x58]
        mov ecx, ebx
        push edx
        call public_6220ca0
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], edi
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, esi
        setne al
        test al, al
        je public_62202cf
        mov esi, dword ptr ds : [ecx+8]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x14]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6222f80
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x28]
        push edx
        push esi
        call dword ptr ds : [ecx+0x48]
        lea eax, ss:[esp+0x28]
        push 0xC
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6222ee0
        lea ecx, ss:[esp+0x34]
        push 4
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6222ee0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        mov dword ptr ss : [esp+0x5C], eax
        lea eax, ss:[esp+0x5C]
        push 4
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6222ee0
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        jle public_6220276
        public_6220253 : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x38]
        push edx
        push edi
        push esi
        call dword ptr ds : [ecx+0x34]
        lea eax, ss:[esp+0x38]
        push 0x10
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6222ee0
        inc edi
        cmp edi, dword ptr ss : [esp+0x5C]
        jl public_6220253
        public_6220276 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        mov dword ptr ss : [esp+0x5C], eax
        lea eax, ss:[esp+0x5C]
        push 4
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6222ee0
        xor edi, edi
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        jle public_62202be
        public_622029b : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        push esi
        call dword ptr ds : [ecx+0x38]
        lea eax, ss:[esp+0x20]
        push 8
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6222ee0
        inc edi
        cmp edi, dword ptr ss : [esp+0x5C]
        jl public_622029b
        public_62202be : nop
        mov ecx, dword ptr ss : [esp+0x10]
        xor edi, edi
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], edx
        jmp public_62201cf
        public_62202cf : nop
        mov eax, dword ptr ss : [ebp]
/*FIXUP push offset public_6256178 @0x62202d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256178
        push ebp
        call dword ptr ds : [eax+0x60]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_6222ec0
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x6220140)
    }
}

#undef public_62201cf
#undef public_6220253
#undef public_6220276
#undef public_622029b
#undef public_62202be
#undef public_62202cf
