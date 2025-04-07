#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d441c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d444b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d444e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d44510);
CLANG_FORWARD_PROC_SYMBOL(public_6d445e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a8);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62da1);

#define public_6d44250 _public_6d44250
#define public_6d44282 _public_6d44282
#define public_6d44294 _public_6d44294
#define public_6d442d7 _public_6d442d7
#define public_6d44304 _public_6d44304
#define public_6d44307 _public_6d44307
#define public_6d4430b _public_6d4430b
#define public_6d4431e _public_6d4431e
#define public_6d4433a _public_6d4433a
#define public_6d44368 _public_6d44368
#define public_6d443a7 _public_6d443a7
#define public_6d443d9 _public_6d443d9
#define public_6d443df _public_6d443df
#define public_6d443e3 _public_6d443e3
#define public_6d443fb _public_6d443fb
#define public_6d4441d _public_6d4441d
#define public_6d44437 _public_6d44437
#define public_6d44450 _public_6d44450
#define public_6d4445e _public_6d4445e
#define public_6d44490 _public_6d44490

PROC_DECLARE(0x6d441c0, internal_6d441c0, public_6d441c0);
extern "C" NAKED register_t __cdecl internal_6d441c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62da1 @0x6d441c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62da1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xEC
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [ebx+8], 2
        mov dword ptr ss : [esp+0x14], ebx
        jb public_6d44490
        mov al, byte ptr ds : [ebx]
        push ebp
        push esi
        push edi
        push 0x20
        mov byte ptr ss : [esp+0x14], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0
/*FIXUP push offset _public_6cecb50 @0x6d44210*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6cecb50
/*FIXUP push offset _public_6d444b0 @0x6d44215*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d444b0
        push 0x10
        push 0xC
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov dword ptr ss : [esp+0x118], 0
        call public_6d601a8
        mov eax, dword ptr ds : [ebx+8]
        xor ebp, ebp
        test eax, eax
        mov byte ptr ss : [esp+0x104], 1
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6d4445e
        lea esp, ss:[esp]
        public_6d44250 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, eax
        je public_6d44282
        mov edx, dword ptr ds : [eax]
        cmp ecx, edx
        je public_6d44282
        push edx
        push eax
        push ebx
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6d445e0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+8]
        inc ecx
        dec eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ds : [ebx+8], eax
        public_6d44282 : nop
        xor esi, esi
        test ebp, ebp
        mov dword ptr ss : [esp+0x30], esi
        jbe public_6d4441d
        lea edi, ss:[esp+0x40]
        public_6d44294 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6d44368
        lea eax, ds:[edi-4]
        lea ecx, ss:[esp+0x10]
        cmp ecx, eax
        lea ebx, ds:[edi-4]
        je public_6d4433a
        mov esi, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [esi]
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x38], esi
        call public_6d5c540
        cmp ebp, esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x38], ecx
        je public_6d4430b
        public_6d442d7 : nop
        cmp eax, ecx
        je public_6d4431e
        mov edx, dword ptr ds : [eax+0x18]
        cmp edx, dword ptr ss : [ebp+0x18]
        jae public_6d44304
        mov esi, dword ptr ds : [eax]
        push esi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        push ebp
        mov ecx, ebx
        call public_6d445e0
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, esi
        mov esi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6d44307
        public_6d44304 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6d44307 : nop
        cmp ebp, esi
        jne public_6d442d7
        public_6d4430b : nop
        cmp eax, ecx
        je public_6d4431e
        push ecx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        mov ecx, ebx
        call public_6d445e0
        public_6d4431e : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ss : [esp+0x1C]
        add eax, edx
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ss : [esp+0x18], 0
        public_6d4433a : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi+4]
        inc esi
        mov dword ptr ds : [edi+4], edx
        add edi, 0xC
        cmp esi, ebp
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x30], esi
        jb public_6d44294
        public_6d44368 : nop
        cmp esi, 0xF
        jne public_6d4441d
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0xF4]
        call public_6d5c540
        mov ebx, dword ptr ss : [esp+0xF4]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x28]
        cmp ecx, ebx
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x2C]
        je public_6d443e3
        public_6d443a7 : nop
        cmp eax, edi
        je public_6d443fb
        mov edx, dword ptr ds : [eax+0x18]
        cmp edx, dword ptr ds : [ecx+0x18]
        jae public_6d443d9
        mov esi, dword ptr ds : [eax]
        push esi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea ecx, ss:[esp+0x100]
        call public_6d445e0
        mov ecx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, esi
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_6d443df
        public_6d443d9 : nop
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], ecx
        public_6d443df : nop
        cmp ecx, ebx
        jne public_6d443a7
        public_6d443e3 : nop
        cmp eax, edi
        je public_6d443fb
        push edi
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x100]
        call public_6d445e0
        public_6d443fb : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xF8]
        mov ebx, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ss : [esp+0xF8], eax
        mov dword ptr ss : [esp+0x18], 0
        jmp public_6d44437
        public_6d4441d : nop
        lea eax, ss:[esp+0x10]
        lea ecx, ds:[esi+esi*2]
        push eax
        lea ecx, ss:[esp+ecx*4+0x40]
        call public_6d444e0
        cmp esi, ebp
        jne public_6d44437
        inc ebp
        mov dword ptr ss : [esp+0x1C], ebp
        public_6d44437 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jne public_6d44250
        test ebp, ebp
        jbe public_6d4445e
        lea edx, ss:[ebp+ebp*2]
        lea esi, ss:[esp+edx*4+0x3C]
        mov edi, ebp
        public_6d44450 : nop
        sub esi, 0xC
        push esi
        mov ecx, ebx
        call public_6d44510
        dec edi
        jne public_6d44450
/*FIXUP public_6d4445e : nop
        push offset _public_6cecb50 @0x6d4445e*/
  FIXUP public_6d4445e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6cecb50
        push 0x10
        push 0xC
        lea eax, ss:[esp+0x48]
        push eax
        mov byte ptr ss : [esp+0x114], 0
        call public_6d6001e
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x104], 0xFFFFFFFF
        call public_6cecb50
        pop edi
        pop esi
        pop ebp
        public_6d44490 : nop
        mov ecx, dword ptr ss : [esp+0xF0]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xF8
        ret 
        UNREACHABLE_TRAP(0x6d441c0)
    }
}

#undef public_6d44250
#undef public_6d44282
#undef public_6d44294
#undef public_6d442d7
#undef public_6d44304
#undef public_6d44307
#undef public_6d4430b
#undef public_6d4431e
#undef public_6d4433a
#undef public_6d44368
#undef public_6d443a7
#undef public_6d443d9
#undef public_6d443df
#undef public_6d443e3
#undef public_6d443fb
#undef public_6d4441d
#undef public_6d44437
#undef public_6d44450
#undef public_6d4445e
#undef public_6d44490
