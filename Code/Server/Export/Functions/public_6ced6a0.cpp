#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced6a0);

#define public_6ced6e7 _public_6ced6e7
#define public_6ced71f _public_6ced71f
#define public_6ced721 _public_6ced721
#define public_6ced730 _public_6ced730
#define public_6ced750 _public_6ced750
#define public_6ced775 _public_6ced775
#define public_6ced777 _public_6ced777
#define public_6ced786 _public_6ced786

PROC_DECLARE(0x6ced6a0, internal_6ced6a0, public_6ced6a0);
extern "C" NAKED register_t __cdecl internal_6ced6a0()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ds : [public_6d6402c]
        mov dx, word ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        mov ebx, dword ptr ds : [eax+4]
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov word ptr ss : [esp+0x14], dx
        call dword ptr ds : [public_6d64244]
        mov ebp, dword ptr ds : [public_6d6428c]
        lea ecx, ss:[esp+0x20]
        lea edi, ds:[ebx+0xE4]
        push ecx
        mov ecx, edi
        call ebp
        mov esi, eax
        test esi, esi
        je public_6ced730
        public_6ced6e7 : nop
        push esi
        call dword ptr ds : [public_6d64290]
        add esp, 4
        test eax, eax
        je public_6ced721
        cmp dword ptr ds : [esi+0x14], 0x100
        je public_6ced721
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x44]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6ced71f
        mov ax, word ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x10]
        mov word ptr ss : [esp+0x14], ax
        jmp public_6ced721
        public_6ced71f : nop
        fstp st(0)
        public_6ced721 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call ebp
        mov esi, eax
        test esi, esi
        jne public_6ced6e7
        public_6ced730 : nop
        lea edi, ds:[ebx+0x144]
        mov ebx, dword ptr ds : [public_6d64284]
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 1
        call ebx
        mov esi, eax
        test esi, esi
        je public_6ced786
        public_6ced750 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d642c8]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6ced775
        mov eax, dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x10]
        mov cx, word ptr ds : [eax+4]
        mov word ptr ss : [esp+0x14], cx
        jmp public_6ced777
        public_6ced775 : nop
        fstp st(0)
        public_6ced777 : nop
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6ced750
        public_6ced786 : nop
        mov ax, word ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6ced6a0)
    }
}

#undef public_6ced6e7
#undef public_6ced71f
#undef public_6ced721
#undef public_6ced730
#undef public_6ced750
#undef public_6ced775
#undef public_6ced777
#undef public_6ced786
