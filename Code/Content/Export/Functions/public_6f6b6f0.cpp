#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6b6f0);

#define public_6f6b712 _public_6f6b712
#define public_6f6b729 _public_6f6b729
#define public_6f6b738 _public_6f6b738
#define public_6f6b73e _public_6f6b73e
#define public_6f6b755 _public_6f6b755
#define public_6f6b75b _public_6f6b75b
#define public_6f6b76a _public_6f6b76a
#define public_6f6b770 _public_6f6b770
#define public_6f6b774 _public_6f6b774

PROC_DECLARE(0x6f6b6f0, internal_6f6b6f0, public_6f6b6f0);
extern "C" NAKED register_t __cdecl internal_6f6b6f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        jb public_6f6b712
        ja public_6f6b73e
        cmp ebx, edi
        setb dl
        test dl, dl
        je public_6f6b73e
        public_6f6b712 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        cmp ecx, edx
        jb public_6f6b770
        mov esi, dword ptr ss : [esp+0x30]
        ja public_6f6b729
        cmp edi, esi
        setb cl
        test cl, cl
        jne public_6f6b770
        public_6f6b729 : nop
        cmp eax, edx
        jb public_6f6b738
        ja public_6f6b755
        cmp ebx, esi
        setb al
        test al, al
        je public_6f6b755
        public_6f6b738 : nop
        lea ecx, ss:[esp+0x2C]
        jmp public_6f6b774
        public_6f6b73e : nop
        mov edx, dword ptr ss : [esp+0x2C]
        cmp eax, edx
        jb public_6f6b755
        mov esi, dword ptr ss : [esp+0x30]
        ja public_6f6b75b
        cmp ebx, esi
        setb al
        test al, al
        je public_6f6b75b
        public_6f6b755 : nop
        lea ecx, ss:[esp+0x14]
        jmp public_6f6b774
        public_6f6b75b : nop
        cmp ecx, edx
        jb public_6f6b76a
        ja public_6f6b770
        cmp edi, esi
        setb al
        test al, al
        je public_6f6b770
        public_6f6b76a : nop
        lea ecx, ss:[esp+0x2C]
        jmp public_6f6b774
        public_6f6b770 : nop
        lea ecx, ss:[esp+0x20]
        public_6f6b774 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        pop edi
        mov dword ptr ds : [edx+4], esi
        pop esi
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f6b6f0)
    }
}

#undef public_6f6b712
#undef public_6f6b729
#undef public_6f6b738
#undef public_6f6b73e
#undef public_6f6b755
#undef public_6f6b75b
#undef public_6f6b76a
#undef public_6f6b770
#undef public_6f6b774
