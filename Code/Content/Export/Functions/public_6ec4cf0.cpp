#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f72930);

#define public_6ec4d2e _public_6ec4d2e
#define public_6ec4d41 _public_6ec4d41
#define public_6ec4d4f _public_6ec4d4f
#define public_6ec4d60 _public_6ec4d60
#define public_6ec4d78 _public_6ec4d78
#define public_6ec4dab _public_6ec4dab
#define public_6ec4ddd _public_6ec4ddd
#define public_6ec4dfc _public_6ec4dfc
#define public_6ec4e1c _public_6ec4e1c
#define public_6ec4e27 _public_6ec4e27
#define public_6ec4e38 _public_6ec4e38

PROC_DECLARE(0x6ec4cf0, internal_6ec4cf0, public_6ec4cf0);
extern "C" NAKED register_t __cdecl internal_6ec4cf0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea eax, ds:[esi+0xC]
        push eax
        mov bl, 1
        mov byte ptr ss : [esp+0x17], 0
        call public_6f15b90
        lea edi, ds:[esi+0x44]
/*FIXUP push offset public_6fb5ab0 @0x6ec4d0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5ab0
        push edi
        mov dword ptr ss : [esp+0x20], eax
        xor ebp, ebp
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ec4d2e
        mov byte ptr ss : [esp+0x13], bl
        jmp public_6ec4d41
/*FIXUP public_6ec4d2e : nop
        push offset public_6fb5ab0 @0x6ec4d2e*/
  FIXUP public_6ec4d2e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5ab0
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ec4d4f
        public_6ec4d41 : nop
        lea ecx, ds:[esi+0x40]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        call public_6f15b90
        mov ebp, eax
        public_6ec4d4f : nop
        mov eax, dword ptr ss : [esp+0x18]
        and eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x14], eax
        jne public_6ec4d60
        xor bl, bl
        public_6ec4d60 : nop
        mov edi, ebp
        and edi, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x20], edi
        jne public_6ec4d78
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_6ec4d78
        xor bl, bl
        public_6ec4d78 : nop
        mov edx, dword ptr ds : [esi+4]
        add edx, 0xC
        push edx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec4e38
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6ec4e38
        test edi, edi
        jne public_6ec4dab
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6ec4e38
        public_6ec4dab : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+8]
        call public_6f478c0
        mov edi, eax
        test edi, edi
        je public_6ec4e38
        mov eax, dword ptr ds : [esi+0xB4]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], 0x3F000000
        mov dword ptr ss : [esp+0x1C], eax
        je public_6ec4ddd
        fild dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x14]
        jmp public_6ec4dfc
        public_6ec4ddd : nop
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f481e0
        cmp ebp, eax
        jne public_6ec4dfc
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        jne public_6ec4dfc
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_6ec4dfc : nop
        mov ecx, dword ptr ds : [esi+0x78]
        test ecx, ecx
        lea eax, ds:[esi+0x78]
        je public_6ec4e1c
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0xAC]
        push edx
        push eax
        mov eax, dword ptr ds : [esi+0xB0]
        push eax
        push ecx
        jmp public_6ec4e27
        public_6ec4e1c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push 0
        push 0
        push 0
        public_6ec4e27 : nop
        mov edx, dword ptr ds : [esi+0x74]
        mov eax, dword ptr ss : [esp+0x28]
        push edx
        push ebp
        mov ecx, edi
        push eax
        call public_6f72930
        public_6ec4e38 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ec4cf0)
    }
}

#undef public_6ec4d2e
#undef public_6ec4d41
#undef public_6ec4d4f
#undef public_6ec4d60
#undef public_6ec4d78
#undef public_6ec4dab
#undef public_6ec4ddd
#undef public_6ec4dfc
#undef public_6ec4e1c
#undef public_6ec4e27
#undef public_6ec4e38
