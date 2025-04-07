#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6271914 _public_6271914
#define public_6271929 _public_6271929
#define public_6271944 _public_6271944
#define public_627195d _public_627195d
#define public_6271960 _public_6271960
#define public_627198b _public_627198b

PROC_DECLARE(0x62718f0, internal_62718f0, public_62718f0);
extern "C" NAKED register_t __cdecl internal_62718f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        jbe public_627195d
        sub edi, eax
        mov ebx, dword ptr ds : [esi+4]
        je public_627198b
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], edi
        public_6271914 : nop
        mov edi, dword ptr ds : [ebx+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6271929
        mov edi, eax
        public_6271929 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6271944
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ebp
        public_6271944 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        dec eax
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6271914
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_627195d : nop
        jae public_627198b
        nop 
        public_6271960 : nop
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        dec ecx
        mov eax, ecx
        cmp edi, eax
        mov dword ptr ds : [esi+8], ecx
        jb public_6271960
        public_627198b : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62718f0)
    }
}

#undef public_6271914
#undef public_6271929
#undef public_6271944
#undef public_627195d
#undef public_6271960
#undef public_627198b
