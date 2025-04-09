#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c540);
CLANG_FORWARD_PROC_SYMBOL(public_446c80);
CLANG_FORWARD_PROC_SYMBOL(public_447210);
CLANG_FORWARD_PROC_SYMBOL(public_447620);
CLANG_FORWARD_PROC_SYMBOL(public_447690);
CLANG_FORWARD_PROC_SYMBOL(public_4482b0);
CLANG_FORWARD_PROC_SYMBOL(public_448c40);
CLANG_FORWARD_PROC_SYMBOL(public_457e30);
CLANG_FORWARD_PROC_SYMBOL(public_457f10);
CLANG_FORWARD_PROC_SYMBOL(public_458160);
CLANG_FORWARD_PROC_SYMBOL(public_4581b0);
CLANG_FORWARD_PROC_SYMBOL(public_458220);
CLANG_FORWARD_PROC_SYMBOL(public_5595a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_447230 _public_447230
#define public_447240 _public_447240
#define public_447267 _public_447267
#define public_447278 _public_447278
#define public_447289 _public_447289
#define public_4472bf _public_4472bf
#define public_447377 _public_447377
#define public_44737e _public_44737e

PROC_DECLARE(0x447210, internal_447210, public_447210);
extern "C" NAKED register_t __cdecl internal_447210()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ds : [public_668a9c], ebp
        mov eax, dword ptr ss : [ebp+0x78]
        xor edi, edi
        xor esi, esi
        cmp eax, edi
        jle public_447240
        lea ebx, ss:[ebp+0x74]
        lea ecx, ds:[ecx]
        public_447230 : nop
        push esi
        mov ecx, ebx
        call public_458160
        mov eax, dword ptr ss : [ebp+0x78]
        inc esi
        cmp esi, eax
        jl public_447230
        public_447240 : nop
        mov eax, dword ptr ss : [ebp+0xA0]
        cmp eax, edi
        je public_447267
        mov ecx, dword ptr ds : [eax-4]
        lea esi, ds:[eax-4]
/*FIXUP push offset _public_446c80 @0x447250*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_446c80
        push ecx
        push 0x44
        push eax
        call public_5b7ec6
        push esi
        call public_5b7e1d
        add esp, 4
        public_447267 : nop
        mov ecx, dword ptr ss : [ebp+0xA4]
        cmp ecx, edi
        je public_447278
        push 3
        call public_447620
        public_447278 : nop
        mov ecx, dword ptr ss : [ebp+0xA8]
        cmp ecx, edi
        je public_447289
        push 3
        call public_447620
        public_447289 : nop
        lea ecx, ss:[ebp+0x74]
        mov dword ptr ss : [ebp+0xA0], edi
        mov dword ptr ss : [ebp+0xA4], edi
        mov dword ptr ss : [ebp+0xA8], edi
        call public_457e30
        mov eax, dword ptr ss : [ebp+0x70]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_4472bf
        mov edx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x60]
        mov dword ptr ss : [ebp+0x70], esi
        public_4472bf : nop
        mov eax, dword ptr ss : [ebp+0x30]
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[ebp+0x20]
        push edx
        mov edx, dword ptr ds : [public_5c6dd8]
        lea ecx, ds:[ebx+0x20]
        push ecx
        push edi
        mov dword ptr ss : [esp+0x20], esi
        mov ecx, dword ptr ds : [edx]
        push edi
        push ecx
        push eax
        call public_41c540
        add esp, 0x1C
        cmp eax, esi
        mov dword ptr ss : [ebp+0x70], eax
        je public_44737e
        push eax
        call public_4482b0
        lea edx, ss:[ebp+0x34]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x20], edx
        lea esi, ss:[ebp+0x40]
        mov ecx, 9
        lea edi, ss:[esp+0x24]
        lea eax, ss:[esp+0x18]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x70]
        push eax
        push ecx
        call public_448c40
        mov edx, dword ptr ds : [ebx+0x10]
        mov cl, byte ptr ds : [edx]
        add esp, 0xC
        test cl, cl
        mov ecx, dword ptr ss : [ebp+0x70]
        setne al
        push ecx
        lea esi, ss:[ebp+0x74]
        mov ecx, esi
        mov byte ptr ss : [ebp+0x13], al
        call public_457f10
/*FIXUP push offset public_5cbd24 @0x44734f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbd24
        call dword ptr ds : [public_5c61a8]
        add esp, 4
        test al, al
        je public_447377
        mov edx, dword ptr ss : [ebp+0x6C]
        push edx
        mov ecx, esi
        call public_4581b0
        mov eax, dword ptr ss : [ebp+0x6C]
        push eax
        mov ecx, esi
        call public_458220
        public_447377 : nop
        mov ecx, ebp
        call public_447690
        public_44737e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push ebx
        call public_5595a0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x447210)
    }
}

#undef public_447230
#undef public_447240
#undef public_447267
#undef public_447278
#undef public_447289
#undef public_4472bf
#undef public_447377
#undef public_44737e
