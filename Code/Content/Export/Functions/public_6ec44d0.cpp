#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ec9530);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d430);

#define public_6ec44f8 _public_6ec44f8
#define public_6ec450a _public_6ec450a
#define public_6ec451d _public_6ec451d
#define public_6ec452f _public_6ec452f
#define public_6ec454e _public_6ec454e
#define public_6ec4571 _public_6ec4571
#define public_6ec458f _public_6ec458f
#define public_6ec45ad _public_6ec45ad
#define public_6ec45bb _public_6ec45bb
#define public_6ec45f5 _public_6ec45f5
#define public_6ec4619 _public_6ec4619
#define public_6ec4635 _public_6ec4635

PROC_DECLARE(0x6ec44d0, internal_6ec44d0, public_6ec44d0);
extern "C" NAKED register_t __cdecl internal_6ec44d0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ds : [public_6fb3048]
        push edi
        mov edi, ecx
        xor ebx, ebx
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], edi
        call esi
        cmp eax, ebx
        jne public_6ec44f8
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ds : [edi+0x14], bl
        jmp public_6ec450a
        public_6ec44f8 : nop
        push eax
        lea eax, ds:[edi+0x14]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi+0x10], eax
        public_6ec450a : nop
        push 1
        mov ecx, ebp
        call esi
        cmp eax, ebx
        jne public_6ec451d
        mov dword ptr ds : [edi+0x44], ebx
        mov byte ptr ds : [edi+0x48], 0
        jmp public_6ec452f
        public_6ec451d : nop
        push eax
        lea ecx, ds:[edi+0x48]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi+0x44], eax
        public_6ec452f : nop
        push 2
        mov ecx, ebp
        call esi
        push eax
        call public_6f1d430
        add esp, 4
        test al, al
        mov ecx, ebp
        push 2
        je public_6ec454e
        call dword ptr ds : [public_6fb3044]
        jmp public_6ec45bb
        public_6ec454e : nop
        call dword ptr ds : [public_6fb30a4]
        sub esp, 0x44
        mov edx, esp
        mov esi, eax
        test esi, esi
        lea ebx, ds:[edx+4]
        mov dword ptr ds : [edx], 0
        mov byte ptr ds : [ebx], 0
        jne public_6ec4571
        mov dword ptr ds : [edx], eax
        mov byte ptr ds : [ebx], al
        jmp public_6ec45ad
        public_6ec4571 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0x40
        mov dword ptr ss : [esp+0x5C], ecx
        jb public_6ec458f
        mov ecx, 0x3F
        mov dword ptr ss : [esp+0x5C], ecx
        public_6ec458f : nop
        mov eax, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x5C]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x54]
        mov byte ptr ds : [eax+ebx], 0
        mov dword ptr ds : [edx], eax
        public_6ec45ad : nop
        mov ecx, dword ptr ds : [edi+4]
        call public_6ec9530
        mov esi, dword ptr ds : [public_6fb3048]
        public_6ec45bb : nop
        push 3
        fstp dword ptr ds : [edi+0x80]
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec4635
/*FIXUP push offset public_6fb5a80 @0x6ec45cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5a80
        push 3
        mov ecx, ebp
        call esi
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec45f5
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_6ec45f5 : nop
        push offset public_6fb5a7c @0x6ec45f5*/
  FIXUP public_6ec45f5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5a7c
        push 3
        mov ecx, ebp
        call esi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec4619
        mov dword ptr ds : [edi+0xC], 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_6ec4619 : nop
        push offset public_6fb5a78 @0x6ec4619*/
  FIXUP public_6ec4619 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5a78
        push 3
        mov ecx, ebp
        call esi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec4635
        mov dword ptr ds : [edi+0xC], 2
        public_6ec4635 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ec44d0)
    }
}

#undef public_6ec44f8
#undef public_6ec450a
#undef public_6ec451d
#undef public_6ec452f
#undef public_6ec454e
#undef public_6ec4571
#undef public_6ec458f
#undef public_6ec45ad
#undef public_6ec45bb
#undef public_6ec45f5
#undef public_6ec4619
#undef public_6ec4635
