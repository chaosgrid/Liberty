#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bece50);

#define public_6bece69 _public_6bece69
#define public_6bece80 _public_6bece80
#define public_6bece8c _public_6bece8c
#define public_6bece90 _public_6bece90
#define public_6becea0 _public_6becea0
#define public_6beceab _public_6beceab

PROC_DECLARE(0x6bece50, internal_6bece50, public_6bece50);
extern "C" NAKED register_t __cdecl internal_6bece50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x48]
        test dl, dl
        push ebx
        jne public_6bece69
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6bece69
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6bece69 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x49]
        test bl, bl
        jne public_6bece90
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6bece8c
        lea esp, ss:[esp]
        public_6bece80 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6bece80
        public_6bece8c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6bece90 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6beceab
        lea esp, ss:[esp]
        public_6becea0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6becea0
        public_6beceab : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6bece50)
    }
}

#undef public_6bece69
#undef public_6bece80
#undef public_6bece8c
#undef public_6bece90
#undef public_6becea0
#undef public_6beceab
