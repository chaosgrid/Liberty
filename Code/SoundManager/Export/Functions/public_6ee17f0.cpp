#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee17f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6ee85e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee1820 _public_6ee1820
#define public_6ee1860 _public_6ee1860
#define public_6ee1887 _public_6ee1887
#define public_6ee1890 _public_6ee1890
#define public_6ee18b4 _public_6ee18b4
#define public_6ee18c5 _public_6ee18c5
#define public_6ee18d1 _public_6ee18d1

PROC_DECLARE(0x6ee17f0, internal_6ee17f0, public_6ee17f0);
extern "C" NAKED register_t __cdecl internal_6ee17f0()
{
    __asm
    {
        mov al, byte ptr ds : [public_6eeaf24]
        test al, 1
        push ebp
        push esi
        jne public_6ee18d1
        mov cl, al
        push ebx
        mov ebx, dword ptr ds : [public_6eeaf04]
        or cl, 1
        push edi
        mov byte ptr ds : [public_6eeaf24], cl
        mov edi, dword ptr ds : [ebx]
        xor ebp, ebp
        cmp edi, ebx
        je public_6ee1860
        lea ebx, ds:[ebx]
        public_6ee1820 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push ebp
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6ee85e0
        push 1
        push esi
        mov ecx, offset public_6eeaf00
        call public_6ee7d10
        mov ecx, dword ptr ds : [public_6eeaf08]
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_6eeaf08], ecx
        jne public_6ee1820
        mov ebx, dword ptr ds : [public_6eeaf04]
        public_6ee1860 : nop
        cmp dword ptr ds : [public_6eeaf48], 0x7FFFFFFF
        jge public_6ee1887
        mov ecx, dword ptr ds : [public_6eeaf3c]
        mov dword ptr ds : [ebx], ecx
        mov eax, dword ptr ds : [public_6eeaf48]
        inc eax
        mov dword ptr ds : [public_6eeaf3c], ebx
        mov dword ptr ds : [public_6eeaf48], eax
        jmp public_6ee1890
        public_6ee1887 : nop
        push ebx
        call public_6ee8ddc
        add esp, 4
        public_6ee1890 : nop
        mov eax, dword ptr ds : [public_6eeaf40]
        pop edi
        dec eax
        mov dword ptr ds : [public_6eeaf04], ebp
        mov dword ptr ds : [public_6eeaf08], ebp
        pop ebx
        mov dword ptr ds : [public_6eeaf40], eax
        jne public_6ee18d1
        mov eax, dword ptr ds : [public_6eeaf3c]
        cmp eax, ebp
        je public_6ee18c5
        public_6ee18b4 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6ee8ddc
        add esp, 4
        cmp esi, ebp
        mov eax, esi
        jne public_6ee18b4
        public_6ee18c5 : nop
        mov dword ptr ds : [public_6eeaf3c], ebp
        mov dword ptr ds : [public_6eeaf48], ebp
        public_6ee18d1 : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ee17f0)
    }
}

#undef public_6ee1820
#undef public_6ee1860
#undef public_6ee1887
#undef public_6ee1890
#undef public_6ee18b4
#undef public_6ee18c5
#undef public_6ee18d1
