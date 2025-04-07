#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_57c0e0);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_PROC_SYMBOL(public_57eec0);
CLANG_FORWARD_PROC_SYMBOL(public_57f740);
CLANG_FORWARD_PROC_SYMBOL(public_57fa70);
CLANG_FORWARD_PROC_SYMBOL(public_57fb50);

#define public_57c127 _public_57c127
#define public_57c131 _public_57c131
#define public_57c147 _public_57c147
#define public_57c150 _public_57c150
#define public_57c165 _public_57c165
#define public_57c17a _public_57c17a
#define public_57c182 _public_57c182
#define public_57c197 _public_57c197
#define public_57c1ab _public_57c1ab
#define public_57c1b8 _public_57c1b8
#define public_57c1c0 _public_57c1c0
#define public_57c203 _public_57c203
#define public_57c20b _public_57c20b
#define public_57c211 _public_57c211
#define public_57c239 _public_57c239
#define public_57c241 _public_57c241
#define public_57c245 _public_57c245
#define public_57c251 _public_57c251
#define public_57c278 _public_57c278
#define public_57c283 _public_57c283
#define public_57c298 _public_57c298

PROC_DECLARE(0x57c0e0, internal_57c0e0, public_57c0e0);
extern "C" NAKED register_t __cdecl internal_57c0e0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x4C8]
        mov eax, dword ptr ds : [edi+0x4CC]
        lea esi, ds:[edi+0x4C4]
        push ecx
        push eax
        push eax
        call public_57fb50
        mov ebx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push ebx
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        mov dword ptr ds : [esi+8], ebx
        je public_57c127
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_57c131
        public_57c127 : nop
        mov edx, dword ptr ds : [edi+0x4D4]
        mov dword ptr ss : [esp+0x20], edx
        public_57c131 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp word ptr ds : [eax], 0
        mov ebp, eax
        mov dword ptr ss : [esp+0x30], ebp
        je public_57c278
        jmp public_57c150
        public_57c147 : nop
        mov ebp, dword ptr ss : [esp+0x30]
        nop 
        lea esp, ss:[esp]
        public_57c150 : nop
        mov ebx, dword ptr ds : [edi+0x510]
        test ebx, ebx
        je public_57c182
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_57c165
        xor edx, edx
        jmp public_57c17a
        public_57c165 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_57c17a : nop
        cmp edx, ebx
        jae public_57c278
        public_57c182 : nop
        mov eax, dword ptr ds : [edi+0x50C]
        test eax, eax
        jne public_57c197
        mov cx, word ptr ss : [ebp]
        mov word ptr ss : [esp+0x1C], cx
        jmp public_57c1c0
        public_57c197 : nop
        cmp eax, 1
        jne public_57c1ab
        xor edx, edx
        mov dx, word ptr ss : [ebp]
        push edx
        call dword ptr ds : [public_5c7114]
        jmp public_57c1b8
        public_57c1ab : nop
        xor eax, eax
        mov ax, word ptr ss : [ebp]
        push eax
        call dword ptr ds : [public_5c7144]
        public_57c1b8 : nop
        add esp, 4
        mov word ptr ss : [esp+0x1C], ax
        public_57c1c0 : nop
        mov al, byte ptr ds : [edi+0x52A]
        test al, al
        mov ebp, dword ptr ds : [edi+0x518]
        lea ebx, ds:[edi+0x514]
        je public_57c211
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, ebx
        call public_57f740
        mov ebx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_57c203
        mov cx, word ptr ss : [esp+0x1C]
        cmp cx, word ptr ds : [eax+0xC]
        jb public_57c203
        lea eax, ss:[esp+0x2C]
        jmp public_57c20b
        public_57c203 : nop
        mov dword ptr ss : [esp+0x10], ebx
        lea eax, ss:[esp+0x10]
        public_57c20b : nop
        cmp dword ptr ds : [eax], ebp
        jne public_57c251
        jmp public_57c245
        public_57c211 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_57fa70
        mov ebx, dword ptr ds : [ebx+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        je public_57c239
        mov cx, word ptr ss : [esp+0x1C]
        cmp cx, word ptr ds : [eax+0xC]
        jb public_57c239
        lea eax, ss:[esp+0x14]
        jmp public_57c241
        public_57c239 : nop
        mov dword ptr ss : [esp+0x18], ebx
        lea eax, ss:[esp+0x18]
        public_57c241 : nop
        cmp dword ptr ds : [eax], ebp
        je public_57c251
        public_57c245 : nop
        mov dx, word ptr ds : [edi+0x528]
        mov word ptr ss : [esp+0x1C], dx
        public_57c251 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        push ecx
        mov ecx, esi
        call public_57eec0
        mov eax, dword ptr ss : [esp+0x30]
        add eax, 2
        cmp word ptr ds : [eax], 0
        mov dword ptr ss : [esp+0x30], eax
        jne public_57c147
        public_57c278 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_57c283
        xor edx, edx
        jmp public_57c298
        public_57c283 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, 0x2AAAAAAB
        imul esi
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_57c298 : nop
        mov ecx, edi
        mov dword ptr ds : [edi+0x4A4], edx
        mov dword ptr ds : [edi+0x4A0], edx
        mov dword ptr ds : [edi+0x49C], edx
        call public_57d330
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x57c0e0)
    }
}

#undef public_57c127
#undef public_57c131
#undef public_57c147
#undef public_57c150
#undef public_57c165
#undef public_57c17a
#undef public_57c182
#undef public_57c197
#undef public_57c1ab
#undef public_57c1b8
#undef public_57c1c0
#undef public_57c203
#undef public_57c20b
#undef public_57c211
#undef public_57c239
#undef public_57c241
#undef public_57c245
#undef public_57c251
#undef public_57c278
#undef public_57c283
#undef public_57c298
