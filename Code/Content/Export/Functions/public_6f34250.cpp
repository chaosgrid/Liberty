#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb010);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f68570);
CLANG_FORWARD_PROC_SYMBOL(public_6f68630);
CLANG_FORWARD_PROC_SYMBOL(public_6f68840);
CLANG_FORWARD_PROC_SYMBOL(public_6f72930);

#define public_6f34305 _public_6f34305
#define public_6f34326 _public_6f34326
#define public_6f3434f _public_6f3434f
#define public_6f34376 _public_6f34376
#define public_6f34381 _public_6f34381
#define public_6f34391 _public_6f34391
#define public_6f343b6 _public_6f343b6
#define public_6f343f0 _public_6f343f0

PROC_DECLARE(0x6f34250, internal_6f34250, public_6f34250);
extern "C" NAKED register_t __cdecl internal_6f34250()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x3D]
        test al, al
        jne public_6f343f0
        mov ebx, dword ptr ss : [esp+0x78]
        cmp dword ptr ds : [public_6fd1bec], ebx
        je public_6f343f0
        lea ebp, ds:[edi-0x174]
        mov ecx, ebp
        call public_6eea860
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6f343f0
        mov eax, dword ptr ds : [edi-0x170]
        lea ecx, ss:[esp+0x78]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x30], esi
        mov byte ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x80], esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb3444]
        mov eax, ebx
        mov ebx, dword ptr ss : [esp+0x7C]
        add esp, 8
        dec eax
        je public_6f3434f
        dec eax
        je public_6f34326
        dec eax
        jne public_6f34391
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ds : [public_6fce5a8]
        lea eax, ss:[esp+0x28]
        push eax
        push ecx
/*FIXUP push offset public_6fb572c @0x6f342e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push edx
        call public_6eeb010
        add esp, 0x10
        test eax, eax
        jne public_6f34305
        lea eax, ss:[esp+0x2C]
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        mov esi, eax
        public_6f34305 : nop
        push esi
        push ebp
        mov ecx, offset public_6fd1bd8
        call public_6f68570
        mov ecx, dword ptr ss : [esp+0x7C]
        push ecx
        push 3
        push ebx
        push ebp
        mov ecx, offset public_6fd1bd8
        call public_6f68840
        jmp public_6f34391
        public_6f34326 : nop
        mov eax, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [public_6fce5a4]
        lea edx, ss:[esp+0x28]
        push edx
        push eax
/*FIXUP push offset public_6fb572c @0x6f34336*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push ecx
        call public_6eeb010
        add esp, 0x10
        test eax, eax
        jne public_6f34381
        lea edx, ss:[esp+0x2C]
        push edx
        jmp public_6f34376
        public_6f3434f : nop
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ds : [public_6fce5a0]
        lea eax, ss:[esp+0x28]
        push eax
        push ecx
/*FIXUP push offset public_6fb572c @0x6f3435f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push edx
        call public_6eeb010
        add esp, 0x10
        test eax, eax
        jne public_6f34381
        lea eax, ss:[esp+0x2C]
        push eax
        public_6f34376 : nop
        call dword ptr ds : [public_6fb3684]
        mov esi, eax
        add esp, 4
        public_6f34381 : nop
        push 0x3F800000
        mov ecx, offset public_6fd1bd8
        push ebp
        call public_6f68630
        public_6f34391 : nop
        test esi, 0x3FFFFFFF
        je public_6f343b6
        mov ecx, dword ptr ds : [edi-0x170]
        push 0x3F000000
        push 0
        push 0
        push 0
        push esi
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        call public_6f72930
        public_6f343b6 : nop
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [edi-4]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x1C], edx
        lea edx, ss:[esp+0x78]
        push 0x1011
        push edx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], 0
        mov byte ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x80], eax
        call public_6f24070
        add esp, 0xC
        public_6f343f0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x5C
        ret 0x10
        UNREACHABLE_TRAP(0x6f34250)
    }
}

#undef public_6f34305
#undef public_6f34326
#undef public_6f3434f
#undef public_6f34376
#undef public_6f34381
#undef public_6f34391
#undef public_6f343b6
#undef public_6f343f0
