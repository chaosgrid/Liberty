#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e640);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ee20);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f040);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f410);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f840);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4e65e _public_6b4e65e
#define public_6b4e660 _public_6b4e660
#define public_6b4e690 _public_6b4e690
#define public_6b4e6b8 _public_6b4e6b8
#define public_6b4e6dd _public_6b4e6dd
#define public_6b4e6e1 _public_6b4e6e1
#define public_6b4e701 _public_6b4e701

PROC_DECLARE(0x6b4e640, internal_6b4e640, public_6b4e640);
extern "C" NAKED register_t __cdecl internal_6b4e640()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6b73f30]
        mov al, 1
        test al, cl
        jne public_6b4e65e
        or cl, al
        mov byte ptr ds : [public_6b73f30], cl
        mov ecx, offset public_6b73f1c
        jmp public_6b4e660
        public_6b4e65e : nop
        ret 
        nop 
        public_6b4e660 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6b4e6dd
        mov ecx, eax
        cmp eax, ecx
        jne public_6b4e6dd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6b4e6b8
        nop 
        lea esp, ss:[esp]
        public_6b4e690 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6b4f410
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0x10]
        call public_6b4f840
        push ebx
        call public_6b6a092
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6b4e690
        public_6b4e6b8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6b4ee20
        jmp public_6b4e701
        public_6b4e6dd : nop
        cmp eax, edi
        je public_6b4e701
        public_6b4e6e1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6b4f7d0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6b4f040
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6b4e6e1
        public_6b4e701 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6b6a092
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6b6a092
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6b4e640)
    }
}

#undef public_6b4e65e
#undef public_6b4e660
#undef public_6b4e690
#undef public_6b4e6b8
#undef public_6b4e6dd
#undef public_6b4e6e1
#undef public_6b4e701
