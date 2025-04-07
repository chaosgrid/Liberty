#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6900);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f47a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa989b);

#define public_6ea695e _public_6ea695e
#define public_6ea6970 _public_6ea6970
#define public_6ea6997 _public_6ea6997
#define public_6ea69c0 _public_6ea69c0
#define public_6ea6a15 _public_6ea6a15
#define public_6ea6a1f _public_6ea6a1f
#define public_6ea6a5f _public_6ea6a5f
#define public_6ea6a95 _public_6ea6a95
#define public_6ea6ad7 _public_6ea6ad7
#define public_6ea6b08 _public_6ea6b08
#define public_6ea6b28 _public_6ea6b28
#define public_6ea6b4d _public_6ea6b4d
#define public_6ea6b5d _public_6ea6b5d
#define public_6ea6b6e _public_6ea6b6e

PROC_DECLARE(0x6ea6900, internal_6ea6900, public_6ea6900);
extern "C" NAKED register_t __cdecl internal_6ea6900()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa989b @0x6ea6908*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa989b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC5C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC78]
        lea eax, ss:[esp+0x60]
        mov ebp, ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6fb302c]
        mov ecx, esi
        call dword ptr ds : [public_6fb3028]
        lea ebx, ss:[ebp+0xC]
        push ebx
        mov dword ptr ss : [ebp+0x10], 0
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ea695e
        push 0
        push 0
        mov ecx, eax
        call public_6f47a30
        public_6ea695e : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6ea6b6e
        push edi
        nop 
        public_6ea6970 : nop
        mov ecx, dword ptr ds : [public_6fce2e0]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6ea6b5d
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ea6b5d
        public_6ea6997 : nop
        mov edx, dword ptr ds : [public_6fce2e8]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6ea6a5f
        push 0
        call dword ptr ds : [public_6fb3048]
        lea edi, ss:[ebp+0x19]
        mov edx, edi
        lea ecx, ds:[ecx]
        public_6ea69c0 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6ea69c0
/*FIXUP push offset public_6fb4264 @0x6ea69ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4264
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ea6b4d
        mov dword ptr ss : [esp+0x18], offset public_6fb4388
/*FIXUP push offset public_6fb4378 @0x6ea69e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4378
        push edi
        mov dword ptr ss : [esp+0xC7C], 0
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ea6a1f
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        lea edx, ss:[esp+0x24]
        public_6ea6a15 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6ea6a15
        public_6ea6a1f : nop
        mov ecx, dword ptr ds : [ebx]
        push 2
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[ebp+4]
        push edi
/*FIXUP push offset public_6fb431c @0x6ea6a2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb431c
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x2C], ecx
        call dword ptr ds : [public_6fb3614]
        add esp, 0x10
        mov dword ptr ds : [public_6fcee14], eax
        mov dword ptr ss : [esp+0xC74], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], offset public_6fb4338
        jmp public_6ea6b4d
        public_6ea6a5f : nop
        mov eax, dword ptr ds : [public_6fce2ec]
        push eax
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6ea6ad7
        push 0
        call dword ptr ds : [public_6fb3020]
        mov edi, eax
        push ebx
        mov dword ptr ss : [ebp+0x10], edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ea6a95
        push 0
        push edi
        mov ecx, eax
        call public_6f47a30
        public_6ea6a95 : nop
        test dword ptr ds : [public_6fcee14], 0x3FFFFFFF
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], esi
        je public_6ea6b4d
        lea edx, ss:[esp+0x10]
        push edx
        push 5
/*FIXUP push offset public_6fcee14 @0x6ea6ab6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fcee14
        call dword ptr ds : [public_6fb360c]
        push 0
        push 0x1000
/*FIXUP push offset public_6fcee14 @0x6ea6ac8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fcee14
        call public_6f24070
        add esp, 0x18
        jmp public_6ea6b4d
        public_6ea6ad7 : nop
        mov eax, dword ptr ds : [public_6fce2f0]
        push eax
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6ea6b08
        push 0
        call dword ptr ds : [public_6fb3044]
        fst dword ptr ss : [ebp+0x14]
        call public_6fa9130
        mov ecx, dword ptr ds : [ebx]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3624]
        add esp, 8
        jmp public_6ea6b4d
        public_6ea6b08 : nop
        mov edx, dword ptr ds : [public_6fce2e4]
        push edx
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6ea6b28
        push 0
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ss : [ebp+0x18], al
        jmp public_6ea6b4d
        public_6ea6b28 : nop
        mov eax, dword ptr ds : [public_6fce2f4]
        push eax
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ea6b4d
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3040]
        test al, al
        setne cl
        mov byte ptr ds : [public_6fcf388], cl
        public_6ea6b4d : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ea6997
        public_6ea6b5d : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6ea6970
        pop edi
        public_6ea6b6e : nop
        lea edx, ss:[esp+0x60]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6fb3010]
        mov ecx, dword ptr ss : [esp+0xC68]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC68
        ret 4
        UNREACHABLE_TRAP(0x6ea6900)
    }
}

#undef public_6ea695e
#undef public_6ea6970
#undef public_6ea6997
#undef public_6ea69c0
#undef public_6ea6a15
#undef public_6ea6a1f
#undef public_6ea6a5f
#undef public_6ea6a95
#undef public_6ea6ad7
#undef public_6ea6b08
#undef public_6ea6b28
#undef public_6ea6b4d
#undef public_6ea6b5d
#undef public_6ea6b6e
