#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407310);
CLANG_FORWARD_PROC_SYMBOL(public_553100);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_55316b _public_55316b
#define public_553177 _public_553177
#define public_5531bd _public_5531bd
#define public_5531c9 _public_5531c9
#define public_5531ed _public_5531ed
#define public_5531ef _public_5531ef
#define public_553223 _public_553223
#define public_553239 _public_553239

PROC_DECLARE(0x553100, internal_553100, public_553100);
extern "C" NAKED register_t __cdecl internal_553100()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        sub eax, 0
        push esi
        je public_5531c9
        sub eax, 2
        mov esi, dword ptr ss : [esp+0xC]
        je public_553177
        sub eax, 2
        jne public_5531ef
        push esi
        call dword ptr ds : [public_5c6020]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [public_5c6b5c]
        add esp, 8
        test eax, 0x3FFFFFFF
        jne public_55316b
        mov ecx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x9B
/*FIXUP push offset public_5e0f00 @0x55314d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
        mov eax, 0x100001
/*FIXUP push offset public_5e0ec8 @0x553157*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0ec8
        push eax
        call dword ptr ds : [ecx]
        mov esi, dword ptr ss : [esp+0x20]
        add esp, 0x14
        jmp public_5531ef
        public_55316b : nop
        push eax
        call dword ptr ds : [public_5c61f4]
        add esp, 4
        jmp public_5531ed
        public_553177 : nop
        push esi
        call dword ptr ds : [public_5c6020]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c65dc]
        add esp, 8
        test eax, 0x3FFFFFFF
        jne public_5531bd
        push esi
        push 0x8A
/*FIXUP push offset public_5e0f00 @0x55319d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
        mov eax, 0x100001
/*FIXUP push offset public_5e0e94 @0x5531a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0e94
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x20]
        add esp, 0x14
        jmp public_5531ef
        public_5531bd : nop
        push eax
        call dword ptr ds : [public_5c61f8]
        add esp, 4
        jmp public_5531ed
        public_5531c9 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        call dword ptr ds : [public_5c6020]
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [public_5c69e4]
        push eax
        call dword ptr ds : [public_5c621c]
        add esp, 0xC
        public_5531ed : nop
        mov esi, eax
        public_5531ef : nop
        mov ecx, dword ptr ds : [esi+4]
        push ebx
        push ebp
        push edi
        push 0
        call public_407310
        mov ecx, esi
        call dword ptr ds : [public_5c6b58]
        mov eax, dword ptr ds : [public_6798a4]
        mov ebx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push 0xC
        mov ebp, eax
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], ebp
        jne public_553223
        mov ebx, eax
        public_553223 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop ebp
        pop ebx
        je public_553239
        mov dword ptr ds : [eax], esi
        public_553239 : nop
        inc dword ptr ds : [public_6798a8]
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x553100)
    }
}

#undef public_55316b
#undef public_553177
#undef public_5531bd
#undef public_5531c9
#undef public_5531ed
#undef public_5531ef
#undef public_553223
#undef public_553239
