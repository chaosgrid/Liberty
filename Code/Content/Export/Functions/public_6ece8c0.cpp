#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2a10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ece8f1 _public_6ece8f1
#define public_6ece903 _public_6ece903
#define public_6ece930 _public_6ece930
#define public_6ece94b _public_6ece94b
#define public_6ece958 _public_6ece958

PROC_DECLARE(0x6ece8c0, internal_6ece8c0, public_6ece8c0);
extern "C" NAKED register_t __cdecl internal_6ece8c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x14]
        test al, al
        mov bl, 1
        mov byte ptr ss : [esp+0xB], bl
        jne public_6ece903
        mov eax, dword ptr ds : [edi+4]
        add eax, 0xC
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        call public_6ef2a10
        add esp, 8
        test al, al
        jne public_6ece8f1
        mov byte ptr ss : [esp+0xB], al
        mov bl, al
        public_6ece8f1 : nop
        cmp dword ptr ds : [edi+0x10], 0xFFFFFFFF
        mov al, bl
        je public_6ece958
        mov byte ptr ds : [edi+0x14], 1
        pop edi
        pop ebx
        add esp, 0xC
        ret 
        public_6ece903 : nop
        fild dword ptr ds : [edi+0x10]
        push ebp
        push esi
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+0x1FC]
        mov ebx, dword ptr ss : [ebp+4]
        add esi, 0x1F8
        fstp dword ptr ss : [esp+0x14]
        push 0x10
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], ebp
        jne public_6ece930
        mov ebx, eax
        public_6ece930 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6ece94b
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edi
        public_6ece94b : nop
        inc dword ptr ds : [esi+8]
        mov al, byte ptr ss : [esp+0x13]
        pop esi
        mov byte ptr ds : [edi+0x14], 0
        pop ebp
        public_6ece958 : nop
        pop edi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ece8c0)
    }
}

#undef public_6ece8f1
#undef public_6ece903
#undef public_6ece930
#undef public_6ece94b
#undef public_6ece958
