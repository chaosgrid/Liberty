#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdca0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdf70);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d13350);
CLANG_FORWARD_PROC_SYMBOL(public_6d15140);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);

#define public_6d15176 _public_6d15176
#define public_6d1519b _public_6d1519b
#define public_6d151c6 _public_6d151c6
#define public_6d151d6 _public_6d151d6
#define public_6d151d9 _public_6d151d9
#define public_6d151dd _public_6d151dd
#define public_6d15203 _public_6d15203
#define public_6d1522e _public_6d1522e
#define public_6d15237 _public_6d15237
#define public_6d15266 _public_6d15266
#define public_6d15270 _public_6d15270

PROC_DECLARE(0x6d15140, internal_6d15140, public_6d15140);
extern "C" NAKED register_t __cdecl internal_6d15140()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi+4]
        mov ebx, ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[ebx+8]
        mov dword ptr ss : [esp+0x30], eax
        xor esi, esi
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0xC]
        je public_6d15176
        mov esi, dword ptr ds : [eax+0x10]
        jmp public_6d1519b
        public_6d15176 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x659
/*FIXUP push offset public_6d6840c @0x6d15186*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68458 @0x6d15190*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68458
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d1519b : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push edi
        mov ecx, esi
        call public_6d13350
        mov ecx, dword ptr ds : [ebx+0x70]
        mov edx, dword ptr ds : [ebx+0x74]
        add ebx, 0x6C
        mov edi, eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], esi
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov ebp, ecx
        mov al, 1
        je public_6d151dd
        public_6d151c6 : nop
        cmp edi, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov ebp, esi
        je public_6d151d6
        mov esi, dword ptr ds : [esi]
        jmp public_6d151d9
        public_6d151d6 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d151d9 : nop
        cmp esi, edx
        jne public_6d151c6
        public_6d151dd : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        je public_6d15203
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
        public_6d15203 : nop
        test al, al
        mov dword ptr ss : [esp+0x2C], ebp
        je public_6d15237
        cmp ebp, dword ptr ds : [ecx]
        jne public_6d1522e
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
        public_6d1522e : nop
        lea ecx, ss:[esp+0x2C]
        call public_6cfdf70
        public_6d15237 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        jae public_6d15266
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
        jmp public_6d15270
        public_6d15266 : nop
        lea edx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x2C], 0
        push edx
        public_6d15270 : nop
        lea ecx, ss:[esp+0x24]
        call public_6d0f600
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d15140)
    }
}

#undef public_6d15176
#undef public_6d1519b
#undef public_6d151c6
#undef public_6d151d6
#undef public_6d151d9
#undef public_6d151dd
#undef public_6d15203
#undef public_6d1522e
#undef public_6d15237
#undef public_6d15266
#undef public_6d15270
