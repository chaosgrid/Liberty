#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44080);
CLANG_FORWARD_PROC_SYMBOL(public_6d5df60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5f040);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d5df80 _public_6d5df80
#define public_6d5dff3 _public_6d5dff3
#define public_6d5dffd _public_6d5dffd
#define public_6d5e003 _public_6d5e003
#define public_6d5e043 _public_6d5e043

PROC_DECLARE(0x6d5df60, internal_6d5df60, public_6d5df60);
extern "C" NAKED register_t __cdecl internal_6d5df60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d90468]
        sub esp, 0x304
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        xor ebp, ebp
        cmp esi, eax
        push edi
        je public_6d5dffd
        lea ecx, ds:[ecx]
        public_6d5df80 : nop
        cmp ebp, 0x80
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ss : [esp+0x318]
        fstp dword ptr ds : [esi+0x14]
        jae public_6d5dff3
        fld dword ptr ds : [esi+0x14]
        fcomp qword ptr ds : [public_6d65538]
        fnstsw ax
        test ah, 5
        jp public_6d5dff3
        mov dword ptr ss : [esp+ebp*4+0x114], esi
        inc ebp
        cmp ebp, 0x80
        jne public_6d5dff3
        mov eax, dword ptr ds : [public_6d9046c]
        push eax
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6d6ba08 @0x6d5dfbf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ba08
        push ecx
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        call public_6d5f040
        lea edx, ss:[esp+0x20]
        push edx
        push 0x3C
/*FIXUP push offset public_6d6b9dc @0x6d5dfd9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b9dc
        mov eax, 0x100002
/*FIXUP push offset public_6d65494 @0x6d5dfe3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65494
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x20
        public_6d5dff3 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6d90468]
        jne public_6d5df80
        public_6d5dffd : nop
        xor edi, edi
        cmp ebp, ebx
        jbe public_6d5e043
        public_6d5e003 : nop
        mov esi, dword ptr ss : [esp+edi*4+0x114]
        lea eax, ds:[esi+8]
        lea ecx, ds:[eax+4]
        push ecx
        push 0x3E
        push eax
        call public_6d44080
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov edx, dword ptr ds : [public_6d9046c]
        add esp, 0x10
        dec edx
        inc edi
        cmp edi, ebp
        mov dword ptr ds : [public_6d9046c], edx
        jb public_6d5e003
        public_6d5e043 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x304
        ret 
        UNREACHABLE_TRAP(0x6d5df60)
    }
}

#undef public_6d5df80
#undef public_6d5dff3
#undef public_6d5dffd
#undef public_6d5e003
#undef public_6d5e043
