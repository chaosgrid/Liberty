#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdca0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdf70);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d120b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d14870);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);

#define public_6d148a6 _public_6d148a6
#define public_6d148cb _public_6d148cb
#define public_6d148f6 _public_6d148f6
#define public_6d14906 _public_6d14906
#define public_6d14909 _public_6d14909
#define public_6d1490d _public_6d1490d
#define public_6d14933 _public_6d14933
#define public_6d1495e _public_6d1495e
#define public_6d14967 _public_6d14967
#define public_6d14996 _public_6d14996
#define public_6d149a0 _public_6d149a0

PROC_DECLARE(0x6d14870, internal_6d14870, public_6d14870);
extern "C" NAKED register_t __cdecl internal_6d14870()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi+8]
        mov ebx, ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[ebx+0x1C]
        mov dword ptr ss : [esp+0x30], eax
        xor esi, esi
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x20]
        je public_6d148a6
        mov esi, dword ptr ds : [eax+0x10]
        jmp public_6d148cb
        public_6d148a6 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x66D
/*FIXUP push offset public_6d6840c @0x6d148b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68480 @0x6d148c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68480
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d148cb : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push edi
        mov ecx, esi
        call public_6d120b0
        mov ecx, dword ptr ds : [ebx+0x34]
        mov edx, dword ptr ds : [ebx+0x38]
        add ebx, 0x30
        mov edi, eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], esi
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov ebp, ecx
        mov al, 1
        je public_6d1490d
        public_6d148f6 : nop
        cmp edi, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov ebp, esi
        je public_6d14906
        mov esi, dword ptr ds : [esi]
        jmp public_6d14909
        public_6d14906 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d14909 : nop
        cmp esi, edx
        jne public_6d148f6
        public_6d1490d : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        je public_6d14933
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebp
        push esi
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, ebx
        call public_6cfdca0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6d14933 : nop
        test al, al
        mov dword ptr ss : [esp+0x2C], ebp
        je public_6d14967
        cmp ebp, dword ptr ds : [ecx]
        jne public_6d1495e
        lea eax, ss:[esp+0x14]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, ebx
        call public_6cfdca0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6d1495e : nop
        lea ecx, ss:[esp+0x2C]
        call public_6cfdf70
        public_6d14967 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        jae public_6d14996
        lea edx, ss:[esp+0x18]
        push edx
        push ebp
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        mov byte ptr ss : [esp+0x3C], 1
        call public_6cfdca0
        push eax
        jmp public_6d149a0
        public_6d14996 : nop
        lea edx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x2C], 0
        push edx
        public_6d149a0 : nop
        lea ecx, ss:[esp+0x24]
        call public_6d0f600
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d14870)
    }
}

#undef public_6d148a6
#undef public_6d148cb
#undef public_6d148f6
#undef public_6d14906
#undef public_6d14909
#undef public_6d1490d
#undef public_6d14933
#undef public_6d1495e
#undef public_6d14967
#undef public_6d14996
#undef public_6d149a0
