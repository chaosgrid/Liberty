#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412b40);

#define public_412b67 _public_412b67
#define public_412b7d _public_412b7d
#define public_412b83 _public_412b83

PROC_DECLARE(0x412b40, internal_412b40, public_412b40);
extern "C" NAKED register_t __cdecl internal_412b40()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [edi+0x31]
        test al, al
        mov ebx, ecx
        lea esi, ds:[ebx+0x1A0]
        mov ecx, esi
        jne public_412b67
        mov eax, dword ptr ds : [esi]
        push 0xFF
        push edi
        call dword ptr ds : [eax+0xC]
        push 1
        jmp public_412b83
        public_412b67 : nop
        mov al, byte ptr ds : [edi+0x32]
        test al, al
        mov eax, dword ptr ds : [esi]
        je public_412b7d
        push 0x8000
        push edi
        call dword ptr ds : [eax+0xC]
        push 1
        jmp public_412b83
        public_412b7d : nop
        push edi
        call dword ptr ds : [eax+0x10]
        push 0
        public_412b83 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        push edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [esi]
        test ecx, ecx
        setne cl
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [ebx+0x20]
        push 1
        push 0
        push edx
        call dword ptr ds : [public_41bbb4]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x412b40)
    }
}

#undef public_412b67
#undef public_412b7d
#undef public_412b83
