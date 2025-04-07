#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3be0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5d80);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5df0);
CLANG_FORWARD_PROC_SYMBOL(public_6d460f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46370);
CLANG_FORWARD_PROC_SYMBOL(public_6d52040);
CLANG_FORWARD_PROC_SYMBOL(public_6d582f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d583b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d598d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a970);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6383b);

#define public_6d520a9 _public_6d520a9
#define public_6d520b5 _public_6d520b5
#define public_6d520ee _public_6d520ee
#define public_6d520f8 _public_6d520f8
#define public_6d5212b _public_6d5212b
#define public_6d52171 _public_6d52171
#define public_6d521b4 _public_6d521b4
#define public_6d521c8 _public_6d521c8
#define public_6d521cf _public_6d521cf
#define public_6d521fd _public_6d521fd
#define public_6d5221b _public_6d5221b
#define public_6d52241 _public_6d52241
#define public_6d52247 _public_6d52247
#define public_6d52253 _public_6d52253
#define public_6d522f1 _public_6d522f1
#define public_6d52365 _public_6d52365
#define public_6d523bb _public_6d523bb

PROC_DECLARE(0x6d52040, internal_6d52040, public_6d52040);
extern "C" NAKED register_t __cdecl internal_6d52040()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6383b @0x6d52042*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6383b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x864
        push ebx
        mov ebx, dword ptr ss : [esp+0x878]
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x44]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x30], esi
        call public_6d583b0
        mov eax, dword ptr ds : [edi+0x48]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        je public_6d520ee
        mov ecx, dword ptr ds : [ecx+0x1C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d520a9
        mov eax, dword ptr ds : [ecx+0x34]
        test eax, eax
        jbe public_6d520a9
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x44]
        public_6d520a9 : nop
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        jne public_6d520b5
        mov edi, offset public_6d64efc
        public_6d520b5 : nop
        call dword ptr ds : [public_6d647e8]
        test al, al
        lea eax, ss:[esp+0x50]
        je public_6d520f8
        push edi
        push eax
        call public_6d46370
        add esp, 8
        lea ecx, ss:[esp+0x50]
        push 0
        push ecx
        call public_6d460f0
        mov ebp, dword ptr ds : [public_6d64bc0]
        push eax
        lea edx, ss:[esp+0x160]
        push 0
        push edx
        call ebp
        jmp public_6d5212b
        public_6d520ee : nop
        mov dword ptr ss : [esp+0x10], 0
        jmp public_6d520a9
        public_6d520f8 : nop
        push 0x104
        push edi
        push eax
        call dword ptr ds : [public_6d64be0]
        add esp, 0xC
        lea ecx, ss:[esp+0x50]
        push 0
        push ecx
        call public_6d460f0
        push eax
        lea edx, ss:[esp+0x160]
        push 0
        push edx
        call dword ptr ds : [public_6d64bc0]
        mov ebp, dword ptr ds : [public_6d64bc0]
        public_6d5212b : nop
        add esp, 0x14
        push 0
/*FIXUP push offset public_6d6b440 @0x6d52130*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b440
        lea eax, ss:[esp+0x15C]
        push eax
        lea ecx, ss:[esp+0x37C]
        push 0
        push ecx
        call ebp
        lea edx, ss:[esp+0x26C]
        push edx
        lea eax, ss:[esp+0x388]
        push eax
        call dword ptr ds : [public_6d64bfc]
        mov edi, eax
        add esp, 0x1C
        xor eax, eax
        cmp edi, 0xFFFFFFFF
        je public_6d521cf
        mov ebx, dword ptr ds : [public_6d64cac]
        public_6d52171 : nop
        test eax, eax
        jne public_6d521c8
        cmp byte ptr ss : [esp+0x26C], 0x2E
        je public_6d521b4
        test byte ptr ss : [esp+0x258], 0x10
        jne public_6d521b4
        push 0
        lea ecx, ss:[esp+0x270]
        push ecx
        lea edx, ss:[esp+0x15C]
        push edx
        lea eax, ss:[esp+0x37C]
        push 0
        push eax
        call ebp
        lea ecx, ss:[esp+0x384]
        push ecx
        call ebx
        add esp, 0x18
        public_6d521b4 : nop
        lea edx, ss:[esp+0x258]
        push edx
        push edi
        call dword ptr ds : [public_6d64bf8]
        add esp, 8
        jmp public_6d52171
        public_6d521c8 : nop
        mov ebx, dword ptr ss : [esp+0x884]
        public_6d521cf : nop
        push edi
        call dword ptr ds : [public_6d64bf4]
        lea eax, ss:[esp+0x158]
        push eax
        call dword ptr ds : [public_6d64c28]
        add esp, 8
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d5221b
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6d521fd
        mov eax, offset public_6d64efc
        public_6d521fd : nop
        lea edx, ss:[esp+0x154]
        push edx
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        mov ecx, 0x100003
/*FIXUP push offset public_6d6b8b8 @0x6d52210*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b8b8
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x10
        public_6d5221b : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6d523bb
        mov eax, dword ptr ds : [eax+0x28]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_6d52365
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[ecx+0x30]
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6d52247
        public_6d52241 : nop
        mov ebp, dword ptr ds : [public_6d64bc0]
        public_6d52247 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        jne public_6d52253
        mov eax, offset public_6d64efc
        public_6d52253 : nop
        push eax
        lea edx, ss:[esp+0x54]
        push edx
        mov byte ptr ss : [esp+0x47C], 0
        call public_6d46370
/*FIXUP push offset public_6d6aea4 @0x6d52266*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x484]
        push ecx
        lea edx, ss:[esp+0x488]
        push 0
        push edx
        call ebp
        lea eax, ss:[esp+0x6C]
        push eax
        call dword ptr ds : [public_6d64ca8]
        mov cl, byte ptr ss : [esp+0x3B]
        add esp, 0x20
        mov byte ptr ss : [esp+0x30], cl
        push 0
        lea ecx, ss:[esp+0x34]
        call public_6ce5d80
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x474]
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x38]
        call public_6ce5df0
        test al, al
        je public_6d522f1
        mov edi, dword ptr ss : [esp+0x34]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x474]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x34]
        call public_6ce5dd0
        mov esi, dword ptr ss : [esp+0x14]
        public_6d522f1 : nop
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        xor edi, edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x884], edi
        call public_6d598d0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        push ecx
        mov dword ptr ss : [esp+0x30], edi
        call public_6d5a970
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0xC
        push edx
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, esi
        call public_6ce3be0
        push 1
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x880], 0xFFFFFFFF
        call public_6ce5d80
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+0x28]
        jne public_6d52241
        mov esi, dword ptr ss : [esp+0x28]
        public_6d52365 : nop
        mov edi, dword ptr ss : [esp+0x884]
        push edi
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, esi
        call public_6d5a4c0
        push edi
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, esi
        mov ebx, eax
        call public_6d59d50
        mov ebx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push ebx
        push edi
        mov dword ptr ss : [esp+0x38], 0
        call public_6d5a970
        add esp, 0xC
        push ebx
        push edi
        lea eax, ss:[esp+0x54]
        push eax
        mov ecx, esi
        call public_6d582f0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d523bb : nop
        mov ecx, dword ptr ss : [esp+0x874]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x870
        ret 4
        UNREACHABLE_TRAP(0x6d52040)
    }
}

#undef public_6d520a9
#undef public_6d520b5
#undef public_6d520ee
#undef public_6d520f8
#undef public_6d5212b
#undef public_6d52171
#undef public_6d521b4
#undef public_6d521c8
#undef public_6d521cf
#undef public_6d521fd
#undef public_6d5221b
#undef public_6d52241
#undef public_6d52247
#undef public_6d52253
#undef public_6d522f1
#undef public_6d52365
#undef public_6d523bb
